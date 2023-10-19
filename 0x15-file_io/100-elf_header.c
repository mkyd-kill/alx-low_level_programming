#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>
#include <sys/types.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        dprintf(2, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    const char *elf_filename = argv[1];
    int fd = open(elf_filename, O_RDONLY);

    if (fd == -1) {
        dprintf(2, "Error: Can't open file %s\n", elf_filename);
        exit(98);
    }

    Elf64_Ehdr header;
    ssize_t read_size = read(fd, &header, sizeof(header));

    if (read_size == -1 || (size_t)read_size < sizeof(header) || memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        dprintf(2, "Error: Not an ELF file\n");
        close(fd);
        exit(98);
    }

    printf("Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x", header.e_ident[i]);
        if (i < EI_NIDENT - 1)
            printf(" ");
    }
    printf("\n");

    printf("Class:   %d-bit\n", (header.e_ident[EI_CLASS] == ELFCLASS32) ? 32 : 64);
    printf("Data:    %s\n", (header.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little-endian" : "2's complement, big-endian");
    printf("Version: %d (current)\n", header.e_ident[EI_VERSION]);
    printf("OS/ABI:  ");
    switch (header.e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
        case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
        case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
        case ELFOSABI_LINUX: printf("UNIX - Linux\n"); break;
        case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
        case ELFOSABI_AIX: printf("UNIX - AIX\n"); break;
        case ELFOSABI_IRIX: printf("UNIX - IRIX\n"); break;
        case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break;
        case ELFOSABI_TRU64: printf("UNIX - TRU64\n"); break;
        case ELFOSABI_MODESTO: printf("Novell - Modesto\n"); break;
        case ELFOSABI_OPENBSD: printf("UNIX - OpenBSD\n"); break;
        case ELFOSABI_OPENVMS: printf("VMS - OpenVMS\n"); break;
        default: printf("<unknown: %x>\n", header.e_ident[EI_OSABI]);
    }
    printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
    printf("Type:    %s\n", (header.e_type == ET_REL) ? "REL (Relocatable file)" : (header.e_type == ET_EXEC) ? "EXEC (Executable file)" : (header.e_type == ET_DYN) ? "DYN (Shared object file)" : (header.e_type == ET_CORE) ? "CORE (Core file)" : "<unknown>");
    printf("Entry point address: 0x%lx\n", (unsigned long)header.e_entry);

    close(fd);
    return 0;
}

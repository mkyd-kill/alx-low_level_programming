#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PASSWORD_LENGTH 64
/**
 * main - generates radnom valid passwords
 * Return: 0 success
 */
void generate_password(char *password)
{
	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
        int charset_size = sizeof(charset) - 1;
        int i, index;

        srand(time(NULL));

        for (i = 0; i < PASSWORD_LENGTH; i++)
        {
                index = rand() % charset_size;
                password[i] = charset[index];
        }
        password[PASSWORD_LENGTH] = '\0';
}

int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	generate_password(password);

	printf("%s\n", password);

	return (0);
}

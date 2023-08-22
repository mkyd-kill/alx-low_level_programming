#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates radnom valid passwords
 * Return: 0 success
 */
int main(void)
{
	srand(time(NULL));

	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int charset_size = sizeof(charset) - 1;
	int i, index;
	int password_length = 8;
	char password[password_length];

	for (i = 0; i < password_length; i++)
	{
		index = rand() % charset_size;
		password[i] = charset[index];
	}
	password[password_length] = '\0';

	printf("Generated password: %s\n", password);

	return (0);
}

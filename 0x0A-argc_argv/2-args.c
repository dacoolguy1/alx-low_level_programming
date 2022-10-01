#include <stdio.h>

/**
 * main - prints all arguments it recives.
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	for( i = 0; i < argc; i++)
	{
		print("%s/n", argv[i]);
	}
	return (0);
	
}

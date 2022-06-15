#include "monty.h"

/**
 * main - opens a monty script file for parsing
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure
 */
int main(int argc, char *argv[])
{
	FILE **file;

	if(argc != 2 || !isdigit(argv[1]))
	{
		fprintf(stderr, "USAGE:push interger");
		exit(EXIT_FAILURE);
	}
	file = fopen("argv[1]", "r");
	if(!file)
	{
		printf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	return (EXIT_SUCCESS)

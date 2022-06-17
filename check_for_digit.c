#include "monty.h"

/**
* is_digits - checks if every char in a string is a digit
* @num: number to check if all chars are digits
* Return: TRUE or FALSE
*/
int is_digits(char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
	{
		if (num[i] == '-' && i == 0)
			i++;
		if (isdigit(num[i]) == 0)
			return (0);
	}
	return (1);
}

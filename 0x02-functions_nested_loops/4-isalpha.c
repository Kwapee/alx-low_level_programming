#include "main.h"

/**
 * _isalpha - function that checks for lowercase character.
 * @c: int to print string
 * Return: 1 if c if letter
 * otherwise Return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

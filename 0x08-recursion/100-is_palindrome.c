#include "main.h"

int check_if_is_palindrome(char *s, int i, int len);
int pal_strlen(char *s);

/**
 * is_palindrome - returns 1 if string is palindrome and
 * 0 if not
 * @s: string to be checked
 *
 * Return: returns checked value
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_if_is_palindrome(s, 0, pal_strlen(s)));
}

/**
 * pal_strlen - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int pal_strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + pal_strlen(s + 1));
}

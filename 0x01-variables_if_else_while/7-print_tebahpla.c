#include <stdio.h>

/**
 * main - prints all the alphabets in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

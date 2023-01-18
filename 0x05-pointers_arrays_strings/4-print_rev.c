#include "holberton.h"

/**
  * print_rev - prints in reverse a string
  * @s: string to be reversed
  *
  * Return: void
  */

void print_rev(char *s)
{
	int len = 0, end;

	while (s[len] != '\0')
	{
		len++;
	}

	end = len - 1;
	for (; end >= 0; end--)
		_putchar(s[end]);
	_putchar('\n');
}

#include "main.h"

/**
  * puts_half - prints the second half of a string
  * @str: string to be printed in half
  *
  *Returns: void.
  */

void puts_half(char *str)
{
	int x, start, len = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;

	for (x = start; x < len; x++)
		_putchar(str[x]);
	_putchar('\n');
}

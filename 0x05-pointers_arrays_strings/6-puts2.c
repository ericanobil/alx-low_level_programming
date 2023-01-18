#include "main.h"

/**
  * puts2 - prints one character and skips the next in a string
  * @str: string to be printed
  *
  * Returns: void.
  */

void puts2(char *str)
{
	int len = 0;
	int y = 0;

	while (str[len] != '\0')
		len++;

	while (y < len)
	{
		_putchar(str[y]);
		y = y + 2;
	}

	_putchar('\n');
}

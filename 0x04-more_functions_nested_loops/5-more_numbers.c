#include "main.h"

/**
* more_numbers - Prints form 0 to 14 10 times
*
* Return: void
*/

void more_numbers(void)
{
	int i = 0;
	int x;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x >= 10)
				_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}

#include <stdlib.h>
#include <stdio.h>

/**
* main - Prints the digits of the decimal number system using putchar
*
* Return: 0 when code executes successfully
*/

int main(void)
{
	int a = 0;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

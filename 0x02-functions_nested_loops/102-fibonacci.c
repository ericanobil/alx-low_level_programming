#include <stdio.h>

/**
 * main - main body of the block
 * Description:- This prgm prints the 1st 50 fibonacci numbers, with 1 and 2 starting.
 * The numbers contain a coma and a space for separation.
 * Return: 0
 */

int main(void)
{
	int count = 2;
	long int a = 1, b = 2;
	long int c;

	printf("%lu, ", a);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", b);
		}
		else
		{
			printf("%lu, ", b);
		}

		c = b;
		b += a;
		a = c;
		count++;
	}

	return (0);
}

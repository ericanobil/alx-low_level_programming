#include "main.h"

/**
 * _abs - this produces the absolute value of an integer
 *@n: integer whose absolute value is to be found
 *
 * Return: int
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}

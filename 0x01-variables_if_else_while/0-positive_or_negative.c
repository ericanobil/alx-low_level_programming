#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main - determines whether randomly generated number is odd or even
*
*Return: 0 if program executes successfully
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
  if (n > 0)
          printf("%d is positive\n", n);
  else if (n == 0)
          printf ("%d is zero\n" n);
  else if (n < 0)
          printf("%d is negative\n" n);
	return (0);
}

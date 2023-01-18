/**
  * rev_string - reverses a string
  * @s: string to be reversed
  *
  * Return: void
  */

void rev_string(char *s)
{
	int x, len = 0, temp;

	while (s[len] != '\0')
		len++;

	len = len - 1;
	x = 0;
	while (x < len)
	{
		temp = s[x];
		s[x] = s[len];
		s[len] = temp;
		x++;
		len--;
	}
}


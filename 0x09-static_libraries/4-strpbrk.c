/**
 * _strpbrk - finds string
 * @s: string to find stuff
 * @accept: accepting arrays
 * Return: returns new value
 */

char *_strpbrk(char *s, char *accept)

{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}

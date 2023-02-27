#include "main.h"

/**
 * _atoi - the function will allow conversion from strings to integers
 * @s: string to be converted to an integer
 * Return: the integer that was found after conversion from string
 */
int _atoi(char *s)
{
	int rop, millan, tony, jose, kylian, num;

	rop = 0;
	millan = 0;
	jose = 0;
	tony = 0;
	kylian = 0;
	num = 0;

	while (s[millan] != '\0')
		millan++;

	while (rop < millan && tony == 0)
	{
		if (s[rop] == '-')
			++kylian;

		if (s[rop] >= '0' && s[rop] <= '9')
		{
			num = s[rop] - '0';
			if (kylian % 2)
				num = -num;
			jose = jose * 10 + num;
			tony = 1;
			if (s[rop + 1] < '0' || s[rop + 1] > '9')
				break;
			tony = 0;
		}
		rop++;
	}

	if (tony == 0)
		return (0);
	return (jose);
}

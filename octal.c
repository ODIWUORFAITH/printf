#include "main.h"

/**
 * itoOctal - change int to octal
 * @list: int to change
 * Return: string with octal
 */

char *itoOctal(va_list pr)
{
	unsigned int temp, num, j = 0, len, i = 0;
	char *s, *fstr;

	num = va_arg(pr, unsigned int);
	temp = num;

	s = malloc(sizeof(char) * 12);
	if (s == NULL)
		return (NULL);

	/*if (num < 0)
	{
		s[0] = 1 + '0';
		j++;
		num *= -1;
		temp *= -1;
	}*/

	while (temp > 0)
	{
		if (temp < 8)
		{
			s[j++] = temp + '0';
			break;
		}
		s[j++] = (temp % 8) + '0';
		temp /= 8;
	}
	s[j] = '\0';
	s = realloc(s, j);
	fstr = malloc(sizeof(char) * j);
	len = j;
	j--;
	while (i <= (len - 1))
	{
		fstr[i++] = s[j--];
	}
	fstr[i] = '\0';
	return (fstr);
}


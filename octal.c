#include "main.h"

/**
 * itoOctal - change int to octal
 * @list: int to change
 * Return: string with octal
 */

char *itoOctal(va_list pr)
{
	int temp, num, j = 0, indice = 1;
	char *s;

	num = va_arg(pr, int);
	temp = num;

	s = malloc(sizeof(char) * 12);
	if (s == NULL)
		return (NULL);

	if (num < 0)
	{
		s[0] = 1 + '0';
		j++;
		num *= -1;
		temp *= -1;
	}

	while (num > 1)
	{
		num /= 8;
		indice *= 8;
	}

	while (indice > 0)
	{
		s[j++] = (temp / indice + '0');
		temp %= indice;
		indice /= 8;
	}
	s[j] = '\0';

	return (s);
}

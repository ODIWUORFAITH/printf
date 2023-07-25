#include "main.h"

/**
 * intToStr - converts all integers to string
 * @pr: va_list argument type to convert
 * Return: pointer to string
 */
char *intToStr(va_list pr)
{
	unsigned int num, temp, i = 0, j = 0, len;
	char *str, *fstr;
	
	num = va_arg(pr, unsigned int);

	temp = num;
	str = malloc(sizeof(char) * 20);
	while (temp > 0)
	{
		str[i++] = (temp % 10) + '0';
		temp /= 10;
	}
	str[i] = '\0';
	str = realloc(str, i);
	fstr = malloc(sizeof(char) * i);
	len = i;
	i--;
	while (j <= (len - 1))
	{
		fstr[j++] = str[i--];
	}
	fstr[j] = '\0';
	return (fstr);
}

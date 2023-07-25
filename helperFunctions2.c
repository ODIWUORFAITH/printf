#include "main.h"

/**
 * log10 - finds log to base 10 of num
 * @num: integer argument to find log
 * Return: log of num
 */
unsigned int *_log10(unsigned int num)
{
	unsigned int log = 0, temp = num, bigInt = 1, *arrStore;
	
	arrStore = malloc(sizeof(*arrStore) * 2);
	while (temp > 0)
	{
		log++;
		bigInt *= 10;
		temp /= 10;
	}
	arrStore[0] = log;
	arrStore[1] = bigInt;
	return (arrStore);
}

/**
 * intToHex - converts decimal integer to hexadecimal
 * @pr: va_list argument type to convert
 * 
 */
char *intToHexUpper(va_list pr)
{
	char *str, *finalStr;
	unsigned int num, rem, i = 0, len, j;

	num = va_arg(pr, unsigned int);
	str = malloc(sizeof(char) * 50);
	if (num == 0)
	{
		str[i++] = '0';
		str[i++] = '\0';
	}

	while (num > 0)
	{
		rem = num % 16;
		if (rem < 10)
			str[i++] = rem + '0';
		else
		{
			str[i++] = rem - 10 + 'A';
		}
		num /= 16;
	}
	str[i] = '\0';
	str = realloc(str, i);
	finalStr = malloc(sizeof(char) * i);
	len = j = i - 1;
	i = 0;
	while (i <= len)
	{
		finalStr[i++] = str[j--];
	}
	finalStr[i] = '\0';
	return (finalStr);
}
	
/**
 * intToHex - converts decimal integer to hexadecimal
 * @pr: va_list argument type to convert
 * 
 */
char *intToHexLower(va_list pr)
{
	char *str, *finalStr;
	unsigned int num, rem, i = 0, len, j;

	num = va_arg(pr, unsigned int);
	str = malloc(sizeof(char) * 50);
	if (num == 0)
	{
		str[i++] = '0';
		str[i++] = '\0';
	}

	while (num > 0)
	{
		rem = num % 16;
		if (rem < 10)
			str[i++] = rem + '0';
		else
		{
			str[i++] = rem - 10 + 'a';
		}
		num /= 16;
	}
	str[i] = '\0';
	str = realloc(str, i);
	finalStr = malloc(sizeof(char) * i);
	len = j = i - 1;
	i = 0;
	while (i <= len)
	{
		finalStr[i++] = str[j--];
	}
	finalStr[i] = '\0';
	return (finalStr);
}
	

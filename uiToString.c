#include "main.h"

/**
 * intToString - converts integer into characters array
 * @pr: va_list type argument
 * Return: pointer to string created on success, NULL on failure
 */
char *u_intToString(va_list pr)
{
	char *str;
	int i = 0, log, num, temp, bigInt, *arrStore;

	num = va_arg(pr, int);
	temp = num;
	arrStore = _log10(num);
	log = arrStore[0];
	bigInt = arrStore[1];
	str = malloc(sizeof(*str) * log);
	if (str != NULL)
	{
		if (temp < 0)
			temp *= -1;
		while (bigInt >= 1)
		{
			str[i] = ((temp / bigInt) + '0');
			temp = temp % bigInt;
			bigInt /= 10;
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}

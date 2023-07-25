#include "main.h"

/**
 * reverseStr - reverses a string
 * @pr: va_list type argument
 * Return: rstr(pointer to reversed string
 */
char *reverseStr(va_list pr)
{
	char *str, *rstr;
	int len, i, j = 0;

	str = va_arg(pr, char *);
	if (str == NULL)
		str = ")llun(";

	len = _strlen(str);
	rstr = malloc(sizeof(char *) * (len + 1));
	i = (len - 1);

	if (rstr != NULL)
	{
		while (i >= 0)
		{
			rstr[j] = str[i];
			i--;
			j++;
		}
		rstr[j] = '\0';
	}
	return (rstr);
}

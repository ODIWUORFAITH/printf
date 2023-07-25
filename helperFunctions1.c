#include "main.h"

/**
 * charprinter - returns a character
 * @pr: va_list type argument
 * Return: character pointer
 */
char *charprinter(va_list pr)
{
	char *str, chr;

	chr = va_arg(pr, int);
	if (chr == 0)
		chr = '\0';
	str = malloc(sizeof(char *) * 2);
	if (str == NULL)
		return (NULL);
	str[0] = chr;
	str[1] = '\0';
	return (str);
}

/**
 * strprinter - returns a string for printing
 * @pr: va_list type argument
 * Return: string on success
 */
char *strprinter(va_list pr)
{
	char *str, *str1;
	int len;
	
	str1 = va_arg(pr, char *);
	if (str1 == NULL)
		str1 = "(nul)";
	len = _strlen(str1);
	str = malloc(sizeof(char *) * len + 1);
	if (str == NULL)
		return (NULL);
	_strcpy(str, str1);

	return (str);
}

/**
 * intToString - converts integer into characters array
 * @pr: va_list type argument
 * Return: pointer to string created on success, NULL on failure
 */
char *intToString(va_list pr)
{
	char *str, *finalStr;
	unsigned int i = 0, log, num, temp, bigInt, *arrStore;

	num = va_arg(pr, unsigned int);
	temp = num;
	arrStore = _log10(num);
	log = arrStore[0];
	bigInt = arrStore[1];
	str = malloc(sizeof(*str) * log);
	if (str != NULL)
	{
		while (bigInt >= 1)
		{
			str[i] = ((temp / bigInt) + '0');
			temp = temp % bigInt;
			bigInt /= 10;
			i++;
		}
		str[i] = '\0';
	}
	finalStr = malloc(sizeof(char) * i);
	i = 0;
	while (str[i] != '\0')
	{
		finalStr[i] = str[i + 1];
		i++;
	}
	return (finalStr);
}

/**
 * allocEmptyMem - allocates Empty memory for storing a string
 * Return: character pointer to the allocated memory
 */
char *allocEmptyMem(void)
{
	char *buff;

	buff = malloc(sizeof(*buff) * 1024);
	if (buff == NULL)
		return (NULL);
	return (buff);
}
/**
 * writeAll - reallocates memory allocated earlier for string
 * and prints the string to starndad I/O
 */
void writeAll(char *str, int len, va_list pr)
{
	char *buff;

	buff = realloc(str, len);
	write(1, buff, len);
	free(buff);
	va_end(pr);
}

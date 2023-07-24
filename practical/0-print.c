#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character pointer to string format
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	int len = 0, fullLen = 0, i = 0, j;
	char *str, *strHolder;
	va_list pr;

	str = allocEmptyMem();
	va_start(pr, format);
	if (str != NULL)
	{
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			str[len++] = format[i++];
			fullLen++;		
		}
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				str[len++] = '%';
				fullLen++;
			}
			if (format[i] == 'c')
			{
				strHolder = strprinter(pr);
				if (format[i] == 'c' && strHolder[0] == '\0')
				{
					str[len++] = '\0';
					fullLen++;
				}
				str[len++] = strHolder[0];
			}
			if (format[i] == 's')
			{
				strHolder = charprinter(pr);
				if (strHolder != NULL)
				{
					j = 0;
					while(strHolder[j] != '\0')
					{
						str[len++] = strHolder[j++];
						fullLen++;
					}
				}
			}
			i++;
		}
	}
	writeAll(str, fullLen, pr);
	}
	return (fullLen);
}

#include "main.h"

/**
 * getFunction - checks for the correct function according
 * to specifier
 * @spec: character pointer to specifier type
 * Return: function pointer on success, NULL on failure
 */
char *(*getFunction(char spec))(va_list pr)
{
	int i = 0;

	typeFunc functions[] = {
		{'c', charprinter},
		{'s', strprinter},
		{'d', intToString},
		{'i', intToString},
		{'b', _itob},
		{'o', itoOctal},
		{'r', reverseStr},
		{'u', intToStr},
		{'X', intToHexUpper},
		{'x', intToHexLower},
		{'\0', NULL}
	};

	while (functions[i].type != '\0')
	{
		if (functions[i].type == spec)
		{
			return (functions[i].func);
		}
		i++;
	}
	return (NULL);
}

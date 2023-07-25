#include "main.h"
#include <stdio.h>

/**
 * prints a formatted binary representation of a number
 * @b: converts an unsigned int into binary
 * @param format: the format string for the binary representation.
 * Return: the number of characters printed (excluding the null)
 */
void binary_printf(const char* format, int number)
{
	va_list args;

	va_start(args, format);

	int printed_chars = 0;
	const char *ptr = format;

	while (*ptr != '\0')
	{
		if (*ptr == '%')
		{
			unsigned int value = va_arg(args, unsigned int);

			for (int 1 = sizeof(unsigned int) * 8 - 1; i >= 0; --i)
			{
				putchar((value & (1 << i)) ? '1' : '0');
				printed_chars++;
			}
			ptr++;
		}
		else
		{
			putchar(*ptr);
			printed_chars++;
		}
		ptr++;
	}
	va_end(args);
	return (printed_chars);
}
int main(void)
{
	unsigned int num1 = 42;
	unsigned int num2 = 100;

	binary_printf("Binary representation of %%b: %b\n", num1);
	binary_printf("Binary representation of %%b: %b\n", num2);
	return (0);
}

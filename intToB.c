#include "main.h"

/**
 * _itob - converts integer to binary with the help of _log2
 * @pr: va_list type argument
 * Return: character pointer to string of bits on success
 */
char *_itob(va_list pr)
{
	char *str, *finalStr;
	int num, i = 0, temp, bigInt;

	num = va_arg(pr, int);
	
	str = malloc(sizeof(char) * 33);
	if (str != NULL)
	{
		if (num < 0)
		{
			num *= -1;
			str[0] = 1 + '0';
			i++;
		}
		bigInt = _log2(num);
		temp = num;
		while (bigInt >= 1)
		{
			str[i] = ((temp / bigInt) + '0');
			temp = temp % bigInt;
			bigInt /= 2;
			i++;
		}
		str[i] = '\0';
		finalStr = malloc(sizeof(char) * i);
		i = 0;
		while (str[i] != '\0')
		{
			finalStr[i] = str[i + 1];
			i++;
		}
	}
	return (finalStr);

}

/**
 * _log2 - finds log to base 2 of num to help in convertion to binary
 * @num: integer argument to convert to binary
 * Return: pointer to integer array storing log to base 2 of num and
 * largest integer in num with perfect log to base 2
 */
int _log2(int num)
{
	int temp = num, bigInt = 1, arrStore;
	
	while (temp != 0)
	{
		bigInt *= 2;
		temp /= 2;
	}
	arrStore = bigInt;
	return (arrStore);
}

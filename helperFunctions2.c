#include "main.h"

/**
 * log10 - finds log to base 10 of num
 * @num: integer argument to find log
 * Return: log of num
 */
int *_log10(int num)
{
	int log = 0, temp = num, bigInt = 1, *arrStore;
	
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

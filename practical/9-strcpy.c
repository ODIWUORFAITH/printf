#include "main.h"
#include <string.h>
/**
 * _strcpy - copies string into another string
 * @dest: pointer to string to which another string is copied
 * @src: pointer to string which is copied to another string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stddef.h>

int _printf(const char *format, ...);

/**
 * struct typeFunc - stores specifier type and
 * corresponding function's pointer
 * @type: specifier type for place holder
 * @func: corresponding function to place holder
 */
typedef struct typeFunc
{
	char *type;
	char* (*func)(va_list);
}typeFunc;

#endif

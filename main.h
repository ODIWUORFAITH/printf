#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <math.h>

int _putchar(char c);
int _printf(const char *format, ...);
char *charprinter(va_list pr);
char *strprinter(va_list pr);
char *allocEmptyMem(void);
void writeAll(char *str, int len, va_list pr);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *(*getFunction(char spec))(va_list pr);
char *intToString(va_list pr);
unsigned int *_log10(unsigned int num);
char *_itob(va_list pr);
char *itoOctal(va_list pr);
char *reverseStr(va_list pr);
char *rot13(va_list list);
char *u_intToString(va_list pr);
int _log2(int num);
char *intToHexUpper(va_list pr);
char *intToHexLower(va_list pr);
int binary_printf(const char *format, ...);

/**
 * struct typeFunc - stores specifier type and
 * corresponding function's pointer
 * @type: specifier type for place holder
 * @func: corresponding function to place holder
 */
typedef struct typeFunc
{
	char type;
	char* (*func)(va_list);
}typeFunc;

#endif

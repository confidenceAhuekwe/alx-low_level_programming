#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const, ...);

/**
 * struct print - Data type of a format.
 * @t: print type.
 * @f: Print function.
 *
 */

typedef struct print
{
	char *t;
	void (*f)(va_list all);
} print_t;
#endif

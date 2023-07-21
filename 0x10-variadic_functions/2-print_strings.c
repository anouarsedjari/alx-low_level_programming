#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: string wil  be printed between strings
 * @n: number of argument passed to function.
 * @...: variable number of strings will be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	char *ptr;
	unsigned int i;

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(a, char *);

		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(a);
}

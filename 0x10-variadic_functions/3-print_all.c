#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: the number of the argument
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *ptr, *sp = "";

	va_list a;

	va_start(a, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(a, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(a, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(a, double));
					break;
				case 's':
					ptr = va_arg(a, char *);
					if (!ptr)
						ptr = "(nil)";
					printf("%s%s", sp, ptr);
					break;
				default:
					i++;
					continue;
			}
			sp = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(a);
}

#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the get_print() function that will
 * determine which printing function to call depending on the conversion
 * specifiers contained into fmt
 * Return: length of the formatted output string
 */
int _printf(const char *format, ...)
{
	int (*func)(va_list, flags_t *);
	const char *ptr;
	va_list args;
	flags_t flags = {0, 0, 0};
	register int index = 0;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	ptr = format;
	while (*ptr)
	{
		if (*ptr == '%')
		{
			ptr++;
			if (*ptr == '%')
			{
				index += _putchar('%');
				continue;
			}
			while (get_flag(*ptr, &flags))
				ptr++;
	
			func = get_print(*ptr);
			index += (func)	? func(args, &flags)
				: _printf("%%%c", *ptr);
		}
		else
			index += _putchar(*ptr);
	ptr++;
	}

	_putchar(-1);
	va_end(args);
	return (index);
}

int main(void)
{
	return (0);
}

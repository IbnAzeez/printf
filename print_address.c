#include "main.h"

/**
 * print_address - prints address of input
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_address(va_list l, flags_t *f)
{
	char *s;
	unsigned long int x = va_arg(l, unsigned long int);

	register int c = 0;

	(void)f;

	if (!x)
		return (_puts("(nil)"));

	s = convert(x, 16, 1);
	c += _puts("0x");
	c += _puts(s);
	return (c);
}

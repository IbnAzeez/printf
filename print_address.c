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
	char *str;
	unsigned long int ptr = va_arg(l, unsigned long int);

	register int index = 0;

	(void)f;

	if (!ptr)
		return (_puts("(nil)"));
	
	str = convert(ptr, 16, 1);
	index += _puts("0x");
	index += _puts(str);
	return (index);
}

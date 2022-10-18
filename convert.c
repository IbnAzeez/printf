#include "main.h"

/**
 * convert - converts number and base into string
 * @num: input number
 * @base: input base
 * @lowercase: flag if hexa values need to be lowercase
 * Return: result string
 */
char *convert(unsigned long int num, int base, int lowercase)
{
	static char *s;
	static char buffer[50];
	char *p;

	s = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	p = &buffer[49];
	*p = '\0';
	do {
		*--p = s[num % base];
		num /= base;
	} while (num != 0);
	return (p);
}

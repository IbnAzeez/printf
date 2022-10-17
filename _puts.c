#include "main.h"
#include <unistd.h>

/**
 *  * _puts - prints a string to stdout
 *   * @str: pointer to the string to print
 *    * Return: number of chars written
 *     */
int _puts(char *str)
{
	register int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}

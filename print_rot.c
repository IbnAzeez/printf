#include "main.h"

/**
 * print_rot13 - prints a string using rot13
 * @l: list of arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: length of the printed string
 */
int print_rot13(va_list l, flags_t *f)
{
	int i, j;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *str = va_arg(l, char *);

	(void)f;

	for (j = 0; str[j] j++)
	{
		if (str[j] < 'A' || (str[j] > 'Z' && str[j] < 'a') || str[j] > 'z')
			_putchar(str[j]);
		else
		{
			i = 0;
			while (i <= 52)
			{
				if (str[j] == rot13[i])
					_putchar(ROT13[i]);
			i++;
			}
		}
	}

	return (j);
}


#include "main.h"

/**
 * get_print - picks the right printing function
 * depending on the conversion specifier passed to _printf
 * @s: character that holds the conversion specifier
 * Description: the function loops through the structs array
 * func_arr[] to find a match between the specifier passed to _printf
 * and the first element of the struct
 * Return: a pointer
 */
int (*get_print(char s))(va_list, flags_t *)
{
	phand func_arr[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_hex_big},
		{'b', print_binary}, 
		{'o', print_octal},
	/*	{'R', print_rot13}, */
		{'r', print_rev},
		{'S', print_bigS},b
		{'p', print_address},
		{'%', print_percent}
	};

	int flags = 13;

	register int i;

	i = 0;

	while (i < flags)
	{
		if (func_arr[i].c == s)
			return (func_arr[i].f);
		i++;
	}

	return (NULL);
}

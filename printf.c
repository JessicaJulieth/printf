#include "holberton.h"
#include <stdio.h>

/**
 * op_character - x
 *
 * @list: contained the structres
 *
 * Return: if is 1 show the output
 */
int op_character(va_list list)
{
	int Character = va_arg(list, int),
	write(1, &Character, 1);
	return (1);
}

/**
 * get_op_func - Function pointer that container the structure
 * @Character: Character
 *
 *
 * Return: NULL
 */

int (*get_op_func(char *Character))(int Number1, int Number2)
{
	op_t ops[] = {
		{"c", op_character},
		{"i", NULL},
		{"%", NULL},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *Character)
			return (ops[i].function);
		i++;
	}
	return (NULL);
}

/**
 * _printf - Function that print characters
 * @format: It is a format
 * Return: Print a numbers of a length
 */
int _printf(const char *format, ...)
{
	unsigned long lenght_fmt = 0;
	const char *fmt = format;

	va_list list,
	va_start(list, format);

	while (fmt && *fmt)
	{
		if (*fmt == '%')
		{
			int (*f)(va_list);

			/* Analizamos el segundo carácter del %*/
			/* por ejemplo: %d,  analizamos el cáracter d*/
			fmt++;
			f = get_op_func(fmt);

			if (f != NULL)
			{
				lenght_fmt += f(list);
			}
			else
			{
				write(1, fmt, 1);
			}
			fmt++;
		}
		else
		{
			lenght_fmt++;
			write(1, fmt, 1);
			fmt++;
		}
	}
	va_end(list);

	}
}

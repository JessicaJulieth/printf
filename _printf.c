#include "holberton.h"
/**
		 * _printf - Functions that print all character
		 * @format: Is a character string
		 * Return: Output the length
		*/
int _printf(const char *format, ...)
{
	unsigned long lenght_fmt = 0;
	const char *fmt = format;
	int x = 0;
	int s = 0;

	va_list list;
	int (*f)(va_list);

	va_start(list, format);
	s = percentcases(fmt, list);
	if (s == (-1))
	{
		return (-1);
	}
	while (fmt[x])
	{
		if (fmt[x] == '%')
		{
			f = get_op_func(&fmt[x]);
			if (f != NULL)
			{
				lenght_fmt += f(list);
				x += 2;
				continue;
			}
			else
			{
				if (fmt[x] == '%' && fmt[x + 1] == '\0')
				{return (-1);
				}
				lenght_fmt += _putchar(fmt[x]);
			}
		}
		else
		{lenght_fmt += _putchar(fmt[x]);
		}
		x++;
	}
	va_end(list);
	return (lenght_fmt);
}

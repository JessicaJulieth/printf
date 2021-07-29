#include "holberton.h"
/**
 * percentcases - Functions that print all character
 * @list: Is a character string
 * @fmt: This is a point that contain the format
 * Return: Output the length
 */
int percentcases(const char *fmt, va_list list)
{
	int t;
	(void)list;
	if (fmt == NULL)
		return (-1);
	for (t = 0; fmt[t]; t++)
	{
		if (fmt[t] == '%')
		{
			if (fmt[t + 1] == '%' || fmt[t + 2] == '%')
			{
				if (fmt[t + 3] == '%' || fmt[t + 3] == 'i')
				{
					continue;
				}
				return (-1);
			}
		}
		else if (fmt[t + 1] == '%' && fmt[t + 2] == '%')
		{
			t += 4;
		}
	}
	return (0);
}

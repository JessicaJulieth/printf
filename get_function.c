#include  "holberton.h"
/**
 * op_character -  Fuction that print all character
 * @list: Have print arguments
 *
 * Return: Returns the characters
 */
int op_character(va_list list)
{
	int Character = va_arg(list, int);

	write(1, &Character, 1);
	return (1);
}
/**
 * op_string - Fuction that print the string
 * @list: Have print arguments
 *
 * Return: Returns the string
 */
int op_string(va_list list)
{
	char *String = va_arg(list, char*);
	int length = 0;

	if (String == NULL)
	{
		String = "(null)";
	}

	while (String[length] != '\0')
	{
		length++;
	}
	write(1, String, length);
	return (length);
}
/**
 * op_percent - Fuction that print percent
 * @list: Have print arguments
 *
 * Return: Returns the percent
 */

int op_percent( va_list list)
{
	(void)list;
	_putchar('%');
	return (-1);
}
/**
 * op_integer -Function that print a integer
 * @list: Have a print argunment
 *
 * Return: The number of arguments printed
 */

int op_integer(va_list list)
 {
	 long int entero;
	 int aux;
	 int x;

	 entero = va_arg(list, int);
	 aux = 0;

	 if (x < 0)
	 {
		 entero = -x;
		 aux += _putchar('-');
	 }
	 else
	 {
		 entero = x;
	 }
	 if (entero / 10 != '\0')
		 aux += op_integer(va_arg / 10);
	 aux += _putchar(entero % 10 + '0');
	 return (aux);
 }

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

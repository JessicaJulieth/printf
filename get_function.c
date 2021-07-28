#include  "holberton.h"
/**
 *
 *
 *
 *
 */
int op_character(va_list list)
{
	int Character = va_arg(list, int);

	write(1, &Character, 1);
	return (1);
}
/**
 *
 *
 *
 *
 */
int op_string(va_list list)
{
	int String = va_arg(list, int);

	write(1, &String, 1);
	return (1);
}
int op_percent(__attribute__((unused)) va_list list)
{
	char percent;
	percent = '%';

	write(1, &percent, 1);
	return (1);
}
/*int op_integer(va_list list)
{
	int Integer = va_arg(list, int);

	write(1, &Integer, 1);
	return (1);
	}*/

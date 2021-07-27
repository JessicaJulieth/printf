#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *struct op - Struct op
 * @op:opator
 * @function: It is a fuction to process
 */

typedef struct op
{
	char *op;
	int (*function)(int a, int b);
}
op_t;

/** prototype main*/
int _printf(const char *format, ...);


/**
 * op_character - character
 * @list: List
 * Return: (0)
 */
int op_character(va_list list);
int (*get_op_func(char *Character))(int Number1, int Number2);
int _printf(const char *format, ...);

int _strlen(char *s);

#endif

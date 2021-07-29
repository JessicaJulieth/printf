#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct op - This is the structure for the print
 * @op: Operator that print the characters
 * @function:Get the functions pointer to process
 */

typedef struct op
{
	char *op;
	int (*function)(va_list);
} op_t;

/*In this block we will have the prototypes of the casso functions */
/* C S D I % */
int op_character(va_list list);
int op_string(va_list list);
/**int op_percent(va_list list);*/
int op_percent(__attribute__((unused)) va_list list);
int op_integer(va_list list);
int print_stranger(va_list list);
int percentcases(const char *fmt, va_list list);

/* They are the fuctions principal*/
int (*get_op_func(const char *Character))(va_list);
int _printf(const char *format, ...);
int _putchar(char c);

#endif

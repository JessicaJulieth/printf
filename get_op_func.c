#include "holberton.h"
/**
 *
 *
 */

int (*get_op_func(const char *Character))(va_list)
{
    op_t ops[] = {
        {"c", op_character},
	{"s", op_string},
	{"d", op_integer},
	{"i", op_integer},
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

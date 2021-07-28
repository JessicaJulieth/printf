#include "holberton.h"
/**
 * get_op_func - Function that contain the prototypes
 * @Character: It is a pointer
 * Return: none
 */
int (*get_op_func(const char *Character))(va_list)
{
	op_t ops[] = {
		{"c", op_character},
		{"s", op_string},
		{"%", op_percent},
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

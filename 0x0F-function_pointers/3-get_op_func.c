#include "cal.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - Entry point
 *
 * description: function that selects the correct function to perform
 *
 * @s: pointer
 *
 * Return: the selected function
 */

int (*get_op_func(char *s))(int, int)
{
	 op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

    i = 0;

    while (ops[i].op != NULL && *(ops[i].op) != *s)
    {
	    i++;
    }
    return (ops[i].f);
}

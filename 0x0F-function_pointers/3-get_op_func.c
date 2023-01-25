#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

int (*get_op_func(char *op))(int, int)
{
	if (!strcmp(op, "+"))
	{
		return op_add;
	}
	else if (!strcmp(op, "-"))
	{
		return op_sub;
	}
	else if (!strcmp(op, "/"))
	{
		return op_div;
	}
	else if (!strcmp(op, "%"))
	{
		return op_mod;
	}
	else if (!strcmp(op, "*"))
	{
		return op_mul;
	}
	else
	{
		return (NULL);
	}
}

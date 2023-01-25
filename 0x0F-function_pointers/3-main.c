#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main.c - calls the func pointer to execute the op funcs
 * argc - count of passed args
 * argv - array of passed args
 * Return: 0
 */

#ifndef OPINDEX
#define OPINDEX 2
#endif

#ifndef FIRSTVALUE
#define FIRSTVALUE 1
#endif

#ifndef SECONDVALUE
#define SECONDVALUE 3
#endif

int main(int argc, char *argv[])
{
	op_t op_func;
	int result;

	if (argc != 4) /* argument is not up to 3 */
	{
		printf("Error\n");
		exit(98);
	}

	op_func.op = argv[OPINDEX];

	/* test for the right operator */
	if (!strcmp(op_func.op, "+") || !strcmp(op_func.op, "-") || !strcmp(op_func.\
op, "/") || !strcmp(op_func.op, "%") || !strcmp(op_func.op, "*"))
	{
		op_func.f = get_op_func(op_func.op);
		result = op_func.f(atoi(argv[FIRSTVALUE]), atoi(argv[SECONDVALUE]));
	}
	else
	{
		printf("Error\n");
		exit(98);
	}

	/* test for division by zero */
	if ((!strcmp(argv[OPINDEX], "/") || !strcmp(argv[OPINDEX], "%")) &&\
atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", result);
	return (0);
}

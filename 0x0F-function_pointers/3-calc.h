/* all functions prototypes and data structures used by the program */
/**
 * struct op - Struct op
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int (*get_op_func(char *s))(int, int);
int op_add(int a, int b); /* returns the sum of a and b */
int op_sub(int a, int b); /* returns the difference between a and b */
int op_mul(int a, int b); /* returns the product of a and b */
int op_div(int a, int b); /* returns the division or modulus of a by b */
int op_mod(int a, int b); /* returns the division or modulus of a by b */

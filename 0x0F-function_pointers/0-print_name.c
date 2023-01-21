/**
 * print_name - prints a name
 * @name: name to print out
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

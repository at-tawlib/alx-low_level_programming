/**
 * print_name - prints a name
 * @name: name to print
 * @f: function pointed to
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

#include "function_pointers.h"

/**
 * print_name - ep
 * @name: pchar
 * @f: funcPointer
 * Return: void;
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

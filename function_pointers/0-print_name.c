#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - print name
 * @name: name input
 * @f: function pointer to char
 */
void print_name(char *name, void (*f)(char *))
{
if (!f || !name)
return;
f(name);
}

#include "main.h"
/**
 * _isdigit - checks char if a digit
 * @c: the char
 * Return: 1 if digit and 0 if not
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}

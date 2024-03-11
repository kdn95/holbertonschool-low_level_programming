#include "main.h"
/**
 * _pow_recursion - x to power
 * of y
 * @x: the int
 * @y: power num
 * Return: value of x to power of y
 * and if y < 0, return -1
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}

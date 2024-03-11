#include "main.h"
/**
 * _sqrt_finder - sqroot
 * finder to check root number
 * @n: number
 * @rootn: root number
 * Return: rootn -1 if
 * no natural sqroot
 */
int _sqrt_finder(int n, int rootn)
{
if (rootn * rootn == n)
{
return (rootn);
}
else if (rootn * rootn > n)
{
return (-1);
}
else
return (_sqrt_finder(n, rootn + 1));
}
/**
 * _sqrt_recursion - sqroot
 * of given number
 * @n: number
 * Return: sqrt num or -1 if
 * no natural sqroot
 */
int _sqrt_recursion(int n)
{
int rootn = 0;
if (n < 0)
{
return (-1);
}
else
{
return (_sqrt_finder(n, rootn));
}
}

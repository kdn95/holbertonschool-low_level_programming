#include "main.h"
/**
 * prime_va - checks whether n
 * is a prime num
 * @n: the int
 * @i: the divisible num
 * Return: 1 if prime and 0
 * if non-prime
 */
int prime_va(int n, int i)
{
if (i == n)
{
return (1);
}
else if (n % i == 0)
{
return (0);
}
else
{
return (prime_va(n, i + 1));
}
}
/**
 * is_prime_number - it
 * checks if int is a prime num
 * @n: the input
 * Return: 0 if not prime num and
 * return if it is
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (prime_va(n, 2));
}
}

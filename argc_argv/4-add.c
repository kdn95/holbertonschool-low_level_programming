#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds +ve numbers
 * @argc: count of numbers
 * @argv: pointer of strings
 * Return: if data is not a digit, print error
 */
int main(int argc, char *argv[])
{
int i, j, sum;
if (argc < 2)
{
printf("0\n");
return (0);
}
i = 1;
while (i < argc)
{
j = 0;
while (argv[i][j] != '\0')
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
j++;
}
sum += atoi(argv[i]);
i++;
}
printf("%d\n", sum);
return (0);
}

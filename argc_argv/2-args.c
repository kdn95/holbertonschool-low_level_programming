#include "main.h"
#include <stdio.h>
/**
 * main - print all args it receives
 * @argc: arg count
 * @argv: array of str
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i;
i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}

#include"main.h"
/**
 * print_alphabet - print in lwrcase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
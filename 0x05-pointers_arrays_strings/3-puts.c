#include "main.h"
/**
*_puts - prints string
*@str: A pointer to int that we will change
*
*Return: void means correct answer
*/

void _puts(char *str)
{
char *c;
int m;

c  = str;

for (m = 0; c[m]; m++)
{
_putchar (c[m]);
}
_putchar('\n');
}

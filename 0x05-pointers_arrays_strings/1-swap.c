#include "main.h"

/**
 * swap_int - swap the values of two integers a and b
 *@a: A pointer to integer we will update
 *@b: B pointer to an int we will update
 *Return: void means correct answer
 */

void swap_int(int *a, int *b)
{
int f;

f = *a;
*a = *b;
*b = f;
}
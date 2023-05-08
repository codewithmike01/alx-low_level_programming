#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: an input integer pointer
 * @b: an input integer pointer
 * Return: nothing at all
 */
void swap_int(int *a, int *b)
{
int aux;
aux = *a;
*a = *b;
*b = aux;
}

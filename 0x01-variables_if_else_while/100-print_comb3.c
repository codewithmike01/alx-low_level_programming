#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;
int innerDigit;
for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
for ( innerDigit = '1'; innerDigit <= '9'; innerDigit++)
{
putchar(innerDigit);
if (innerDigit != '9')
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

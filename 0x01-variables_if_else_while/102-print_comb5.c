#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit, innerDigit;
for (digit = 0; digit <= 98; digit++)
{
for (innerDigit = digit + 1; innerDigit <= 99; innerDigit++)
{
putchar((digit / 10) + '0');
putchar((digit % 10) + '0');
putchar(' ');
putchar((innerDigit / 10) + '0');
putchar((innerDigit % 10) + '0');
if (innerDigit == 99 && digit == 98)
{
continue;
}
putchar(',');
putchar(' ');

}
}
putchar('\n');
return (0);
}

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
	putchar((p / 10) + '0');
	putchar((p % 10) + '0');
	putchar(' ');
	putchar((q / 10) + '0');
	putchar((q % 10) + '0');
if (innerDigit == 99 && digit == 98)
{
putchar(digit);
putchar(innerDigit);
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

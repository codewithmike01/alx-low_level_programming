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
for (digit = '0'; digit < '9'; digit++)
{
for (innerDigit = digit + 1; innerDigit <= '9'; innerDigit++)
{
if (innerDigit != digit)
{
putchar(digit);
putchar(innerDigit);

if (digit == '8' && innerDigit == '9')
{
continue;
}
putchar(',');
putchar(' ');
}
}


}
putchar('\n')
return (0)

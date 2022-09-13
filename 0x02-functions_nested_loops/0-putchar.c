#include<unistd.h>
#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char word[9] = "_putchar";
int i;
for (i = 0; i < 9; i++)
{
_putchar(word[i]);
}
return (0);
}

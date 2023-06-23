#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
int d;
for (d = 48; d < 58; d++)
{
putchar(d);
if (d != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

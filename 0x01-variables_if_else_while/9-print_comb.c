#include <stdio.h>
/**
 * main - prints all possible co,binations of single digit numbers
 * Retrun: 0 (success)
 */
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}

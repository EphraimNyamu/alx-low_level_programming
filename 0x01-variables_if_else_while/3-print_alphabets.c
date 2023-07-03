#include <stdio.h>
#include <ctype.h>
/**
 * main - prints uppercase alphabets followed by lowcase
 * Return: 0 on successful compilation
 */
int main(void)
{
char c;
char d;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (d = 'A'; d <= 'Z'; d++)
{
putchar(d);
}
putchar('\n');
return (0);
}

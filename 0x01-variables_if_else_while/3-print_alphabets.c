#include <stdio.h>
/**
 * main - prints uppercase alphabets followed by lowcase
 * Return: 0 on successful compilation
 */
int main(void)
{
int ch;
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}



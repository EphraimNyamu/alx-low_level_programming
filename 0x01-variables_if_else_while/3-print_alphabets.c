#include <stdio.h>
/**
 * main -prints alphabets in uppercase followed by lowercase
 * Return: 0 for successful compilation
 */
void main(void)
{
int ch;
clrscr();
/* print uppercase letters */
for (ch = ‘A’; ch <= ‘Z’; ch++)
putchar(ch);
putchar(‘\n');
/* print lowercase letters */
for(ch = ‘a’; ch <= ‘z’; ch++)
putchar(ch);
putchar(‘\n’);
getch();
}

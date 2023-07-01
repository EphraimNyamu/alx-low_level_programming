#include <stdio.h>
#include <string.h>
/**
 * main- prints alphabet
 * Return: 0 when successful
 */
void main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 52; i++)
{
putchar(alp[i]);
}
putchar("\n");
return (0);
}

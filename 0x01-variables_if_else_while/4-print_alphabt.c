#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Description: Print alfhabet without "q","e"
 *Return: 0 Always
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z' ; ch++)
{
if (ch != 'q' && ch != 'e')
putchar(ch);
}
putchar('\n');
return (0);
}

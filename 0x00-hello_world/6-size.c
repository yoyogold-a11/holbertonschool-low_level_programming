#include <stdio.h>
/**
 *main - prints the size of several data types
 *
 *Description: the function will print the size of char, int, long int,
 *long long int, and float dataa  types.
 *Return: 0
*/
int main(void)
{
char chr;
int  tni;
long int li;
long long int lli;
float flt;

printf("Size of a char: %lu byte(s)\n", sizeof(chr));
printf("Size of an int: %lu byte(s)\n", sizeof(tni));
printf("Size of a long int: %lu byte(s)\n", sizeof(li));
printf("Size of a long long int: %lu byte(s)\n", sizeof(lli));
printf("Size of a float: %lu byte(s)\n", sizeof(flt));
return (0);
}

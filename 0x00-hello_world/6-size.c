#include <stdio.h>
/**
 * main - A program that prints the zise of  various types  
 * Return: 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of a char: %lu byte(s) \n", (unsigned long)siz
eof(a));
printf("Size of an int: %lu byte(s) \n", (unsigned long)siz
eof(b));
printf("Size of a long int: %lu bytes (s)\n", (unsigned lon
g)sizeof(c));
printf("Size of a long long int: %lu bytes (s) \n", (unsigne
d long)sizeof(d));
printf("Size of a float: %lu bytes (s)\n", (unsigned long)s
isof(f));
return (0);
}

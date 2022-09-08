#include <stdio.h>
/**
* main -Entry Point
* Finding size of various data types
* Return: Always 0 (Success)
*/
int main(void)
{
int a;
long long int c;
char d;
float f;
long int b;
printf("Size of a char: %lu byte(s)\n", sizeof(d));
printf("Size of an int: %lu byte(s)\n", sizeof(a));
printf("Size of a long int: %lu byte(s)\n", sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", sizeof(c));
printf("Size of a float: %lu byte(s)\n", sizeof(f));
return (0);
}

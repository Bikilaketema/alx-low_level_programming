#include <stdio.h>
/**
 *main - Entry poiny
 *
 *Return: Always 0 (Success)
 */

	int main(void)

{
	char alphabet;

	for (alphabet = 122 ; alphabet >= 97; alphabet--)

	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}

#include "main.h"

/**
 * main - prints 10x the alphabet in lowercase
 *
 * Return: Always 0(Success)
 */
void print_alphabet_10x(void)
{
	int count = 0;
	char letter;

	while(count++ <= 9)
	{
		for (letter = 'a'; letter <='z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}

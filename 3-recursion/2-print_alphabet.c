#include "main.h"

/**
 * print_alphabet - prints out the alphabet
 *
 * Return: alphabet
 */

void print_all_letters_from(char c)
{
	if (c > 'z')
	{
		return;
	}
	putchar(c);
	print_all_letters_from(c + 1);
}

void print_alphabet(void)
{
	print_all_letters_from('a');
	putchar('\n');
}

int main(void)
{
	print_alphabet();
	print_all_letters_from('q');
	putchar('\n');

	return (0);
}

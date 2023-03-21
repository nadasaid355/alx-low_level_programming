#include "main.h"

/**
 * print_alphabt - print all alphabt in lowercase and a new line
 */

void print_alphabt(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
		_putchar(let);

	_putchar('\n');
}

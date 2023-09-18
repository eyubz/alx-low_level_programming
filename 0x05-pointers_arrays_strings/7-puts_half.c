#include "main.h"
/**
 * puts_half - Print half of a string
 * @str: a string
 */
void puts_half(char *str)
{
	int i = 0, len = 0, n;

	while (*(str + i) != '\0')
	{
		len += 1;
		i++;
	}
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;
	while (n < len)
	{
		_putchar(*(str + n));
		n += 1;
	}
	_putchar('\n');
}
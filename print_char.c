#include "main.h"

/**
 * print_char - Function that prints a character
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to the _printf function
 * Return: Number of char printed
 */
int print_char(va_list l, flags_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}

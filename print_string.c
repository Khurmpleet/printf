#include "main.h"

/**
 * print_string - Function that loops through a string and prints
 * every character
 * @l: va_list arguments from _printf
 * @f: Pointer to the structure flags that determines
 * if a flag is passed to the _printf function
 * Return: Number of char printed
 */
int print_string(va_list l, flags_t *f)
{
        char *s = va_arg(l, char *);

        (void)f;

        if (!s)
                s = "(null)";
        return (_puts(s));
}


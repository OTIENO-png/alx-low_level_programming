#include "main.h"

/**
 *  * _puts - outputs astring and a new line
 *   * @str: pointer to a string to output
 *     * Return: 0
 */
void _puts(char *str)
{
    int i = 0;

    while (str[i])
    {
        _putchar(str[i]);
        i++;
    }
    _putchar('\n');
}
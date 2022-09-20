#include "main.h"
/**
 * *swap-int - swaps the avalues of a and b
 *  *@b:pointer 2
 *  *@a:pointer 1
 *      *Return 0
 */
void swap_int(int *a, int b)
{
    *a += *b;
    *b = *a - *b;
    *a = *a - *b
}
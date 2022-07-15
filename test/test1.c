#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int n = _printf("%o", 254);
    printf("\nn = %d \n", n);

    return (0);
}
#include "main.h"
int print_int(int value)
{
    int count = 0;
    if (value < 0)
    {
        count += _putchar('-');
        value = -value;
    }
    if (value / 10)
        count += print_decimal(value / 10);

    count += _putchar((value % 10) + '0');

    return (count);
}
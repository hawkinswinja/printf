#include "main.h"
int print_binary(int number)
{
    int binary_num = 0, i = 0;
    int temp[32];

    while (number != 0)
    {
        temp[i] += number % 2;
        number /= 2;
        i++;
    }
    // temp[i] = number;

    for (i; i > 0; i--)
    {
        binary_num += _putchar(temp[i] + '0');
    }

    return (binary_num);
}

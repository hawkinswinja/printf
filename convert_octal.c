#include "main.h"

int convert_octal(int number)
{
    int i, rem, countval = 1;
    int octal_temp = 0, octal_num = 0;

    while (number != 0)
    {
        rem = number % 8;
        octal_temp += rem * countval;
        number /= 8;
        countval *= 10;
        }

    octal_num += _putchar(octal_temp + '0');
}
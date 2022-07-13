#ifndef NICOBYN
#define NICOBYN

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_number(int n);
int dec_to_binary(int n);
int _putstring(char *s);
void _reverse(char *s);
int rev_str(char *s);
int rot13(char *point);
int print_digit(int n);
int _strlen(char *s);
int no_struct(char c, int count, va_list argu);
void cleanup(va_list args, buffer_t *output);
int run_printf(const char *format, va_list args, buffer_t *output);
#endif

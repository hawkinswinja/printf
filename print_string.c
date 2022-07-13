#include "main.h"

int print_string(char *string){
  int i, n;
  for (i = 0; string[i] != '\0'; i++)
  {
    n += _putchar(string[i]);
  }
       
  return (n);
}

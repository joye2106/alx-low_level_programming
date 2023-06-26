#include "main.h"
  2 /**
  3  * _puts - prints an entire string.
  4  * @str: tested string
  5  * Return: always 0.
  6  */
  7 void _puts(char *str)
  8 {
  9         int i;
 10
 11         i = 0;
 12
 13         while (*(str + i) != '\0')
 14         {
 15                 _putchar(*(str + i));
 16                 i++;
 17         }
 18         _putchar('\n');
 19 }

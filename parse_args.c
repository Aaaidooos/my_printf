#include "src.h"

int parse_options(va_list ap, char sym)
{
  int size = 0;
  switch(sym)
  {
    case 's' : size += parse_string(ap);break;
    case 'c' : size += parse_char(ap);break;
    case 'd' : size += parse_decimal(ap);break;
    case 'i' : size += parse_decimal(ap);break;
    case 'u' : size += parse_unsigned(ap);break;
    case 'o' : size += parse_octal(ap);break;
    case 'x' : size += parse_hex(ap);break;
    case 'p' : size += parse_ptr(ap);break;
    case '%' : size += put_char('%');break;
  }
  return size;
}


int parse_args(va_list ap, char* format)
{
     int size = 0;
     while(*format != 0)
     {
         if(*format == '%')
         {
            format++;
            size += parse_options(ap, *format);
         }

         else
         {
            size += put_char(*format);
         }

        format++;
     }

  return size;
}

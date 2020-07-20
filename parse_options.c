#include "src.h"
#include <math.h>

int parse_string(va_list ap)
{
  int size = 0;
  char* arg = va_arg(ap, char*);
  size += print_str(arg);
  return size;
}

int parse_char(va_list ap)
{
  int size = 0;
  char ch = va_arg(ap, int);
  size += put_char(ch);
  return size;
}

int parse_decimal(va_list ap)
{
  int size = 0;
  int num = va_arg(ap, int);
  
  if(num < 0)
  {
    put_char('-');
  }

  size += print_number(num, 10);
  return size;
}

int parse_unsigned(va_list ap)
{
    int size = 0;
    int num = va_arg(ap, int);

    if(num >= 0)
    {
        size += print_number(num, 10);
    }
    
    else
    {
        long new_num = pow(2,32);
        new_num = new_num - (num * -1);
        size += print_number(new_num, 10);
    }
    return size;
}

int parse_octal(va_list ap)
{
    int size = 0;
    int num = va_arg(ap, int);
    char* octal = convert_to(num, 8);
    size += print_str(octal);
    return size;
}

int parse_hex(va_list ap)
{
    int size = 0;
    int num = va_arg(ap, int);
    char* hex = convert_to(num, 16);
    size += print_str(hex);
    return size;
}

int parse_ptr(va_list ap)
{
    void* ptr = va_arg(ap, void*);
    long ptr_num = (long) ptr;
    my_printf("0x");
    char* str = make_ptr(ptr_num);
    int size = print_str(str);
    return size;
}

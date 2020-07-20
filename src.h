#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int sum_of_numbers(int len, ...);
int my_printf(char* format, ...);
int print_str(char* str);
int put_char(char ch);
int parse_args(va_list ap, char* format);
int get_len(long num, int base);
int parse_string(va_list ap);
int parse_char(va_list ap);
int parse_decimal(va_list ap);
char* convert_to(long num, int base);
int print_number(long num, int base);
int parse_unsigned(va_list ap);
int parse_octal(va_list ap);
int parse_hex(va_list ap);
int parse_ptr(va_list ap);
char* make_ptr(long val);

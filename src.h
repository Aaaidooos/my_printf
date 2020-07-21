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
int parse_ptr(va_list ap);
char* make_ptr(long val);
int itoa_base(va_list ap, int base);

// test functions
void test_0_1();
void test_2_3();
void test_4_5();
void test_6_7();
void test_8_9();
void test_10_11();
void test_12_13();
void test_14_15();
void test_16_17();
void test_18_19();
void test_20_21();
void test_22_23();

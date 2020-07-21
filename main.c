#include "src.h"
#include <math.h>


int main()
{
  test_0_1();
  test_2_3();
  test_4_5();
  test_6_7();
  test_8_9();
  test_10_11();
  //.......
  return 0;
}


int my_printf(char* format, ...)
{
 int size = 0;
 va_list ap;
 va_start(ap, format);
 
 if(format != NULL)
 {
    size += parse_args(ap, format);
 }

 va_end(ap);
 return size;
}


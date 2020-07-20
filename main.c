#include "src.h"
#include <math.h>

int main(void)
{
  my_printf("this is implementation of printf\n");
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


#include "src.h"

int print_str(char* str)
{
   if(str == NULL)
   {
       write(1, "(null)", 6);
       return 6;
   }
   else
   {
     int size = 0;
     int len = strlen(str);
     for(int i = 0; i < len; i++)
     {
       size += put_char(str[i]);
     }

     return size;
   }
   
}

int print_number(long num, int base)
{
    char* num_str = convert_to(num, base);
    int size = print_str(num_str);
    //free(num_str);
    return size;
}


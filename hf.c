#include "src.h"

int get_len(long num, int base)
{
 if(num == 0)
 {
   return 1;
 }

 int len = 0;
 long val = num;
 if(val < 0)
 {
   val = val * -1;
 }

 while(val > 0)
 {
     len += 1;
     val = val / base;
 }
 
 return len;
}

int put_char(char ch)
{
   write(1,&ch,1);
   return 1;
}

char* convert_to(long num, int base)
{
  if(num == 0)
  {
    return "0\0";
  }

  int len = get_len(num, base);
  char* number = (char*)malloc(sizeof(char) * len + 1);
  number[len] = '\0';
  
  if(num < 0)
  {
      num = num * -1;
  } 

  int i = len - 1;
  
  while(num > 0)
  {
      int r = num % base;
      
      if(r > 9)
      {
          r = r + 'a'; 
      }
      else
      {
        r = r + '0';
      }
      num = num / base;
      number[i] = r;
      i--; 
  }

  return number;
}

char* make_ptr(long num)
{
  int len = get_len(num, 16);
  char* number = (char*)malloc(sizeof(char) * len + 1);
  number[len] = '\0';
  
  if(num < 0)
  {
      num = num * -1;
  } 

  int i = len - 1;
  
  while(num > 0)
  {
      int r = num % 16;
      
      if(r > 9)
      {
          r = r + 'a' - 10; 
      }
      else
      {
        r = r + '0';
      }
      num = num / 16;
      number[i] = r;
      i--; 
  }

  return number;

}

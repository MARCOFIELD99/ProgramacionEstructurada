#include <stdio.h>
#include<stdlib.h>

int fibo (int num);

int main ()
{
  int r, val;
  
  printf ("0");
  printf ("\n1");
  printf ("\n1");
  for (val = 1; val <= 20; val++)
  {
    r = fibo (val);
    printf("\n%d", r);
  }
system("pause");
return 0;
}

int fibo (int num)
{
  if ((num == 0) || (num == -1)) 
    return 1;
  else
    return fibo (num - 1) + fibo (num - 2);
}

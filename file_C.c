#include <stdio.h>
#include <limits.h>



int ft_max(int a, int b)
{
  isdigit(c);
  return (a > b ? a : b);
} 

void  print_bin(int a, unsigned base)
{
  if (a < 0)
  {
    printf("-");
    a = -a;
  }
  if (a != 0 && base > 1 && base < 37)
  {
    print_bin(a / base, base);
    if (a % base < 10)
    printf("%d",a % base );
    else
    printf("%c", a % base - 10 + 'a');
  }
}



int main(void) {
  print_bin(INT_MIN,10);
  return 0;
}
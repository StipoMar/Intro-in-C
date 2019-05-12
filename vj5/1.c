#include <stdio.h>

int binarno(int n)
{

  return n == 0 ? 0 : (n % 2) + 10 * (binarno(n/2));
}

int main()
{
  int br = 0;


  printf("Upisite broj: ");
  scanf("%d", &br);

  printf("%d", binarno(br));
  return 0;
}
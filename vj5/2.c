#include <stdio.h>

int rek(int n)
{
  
  return n == 1 ? 1 : n * rek(n-2);
}

int main()
{

  unsigned int n = 0;

  printf("Upisite broj: ");
  scanf("%d", &n);

  n = 2 * n - 1;

  printf("%d", rek(n));
  return 0;
}
#include <stdio.h>

int rek(int b, int p)
{

  return p == 0 ? 1 : b * rek(b, p - 1);
}

int main()
{
  unsigned int b, p;

  printf("Unesite bazu i potenciju:");
  scanf("%d %d", &b, &p);

  printf("%d", rek(b, p));
  return 0;
}
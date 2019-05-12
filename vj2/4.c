#include <stdio.h>

int znamenke(int n)
{
  int br = 0;

  while (n)
  {
    n = n / 10;
    br++;
  }
  return br;
}

int duzinaPot(int br)
{

  int p = 1;

  while (br)
  {
    p = p * 10;
    br--;
  }

  return p;
}

int isti(int n)
{

  if (n == n * n * n % duzinaPot(znamenke(n)))
    printf("Trimorfan je \n");
  else
    printf("Nije trimorfan \n");
}

int main()
{

  int n;

  printf("Upisite broj: ");
  scanf("%d", &n);
  while (n)
  {
    isti(n);

    printf("Upisite broj: ");
    scanf("%d", &n);
  }
  printf("Kraj Programa");
  return 0;
}
#include <stdio.h>

float sumaRec(int a)
{
  float suma = 0;
  int i = 1;
  for (int i = 1; i < a + 1; i++)
  {

    suma = suma + (float)1 / i;
  }

  return suma;
}

int main()
{
  int n = 0;

  while (n <= 0)
  {
    printf("Unesite prirodan broj!: ");
    scanf("%d", &n);
  }

  printf("Suma reciprocnih vrijednosti je %.2f", sumaRec(n));
}
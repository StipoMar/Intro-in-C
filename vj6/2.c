#include <stdio.h>

int fun(int *x, int *y, int a, int b)
{

  *x = 2 * a;
  *y = 2 * b;
}

int main()
{

  int a, b, x, y;

  printf("Unesi dvije vrijednosti: ");
  scanf("%d %d", &a, &b);
  fun(&x, &y, a, b);

  printf("Prva vrijednost %d \nDruga vrijednost je: %d", x, y);

  return 0;
}

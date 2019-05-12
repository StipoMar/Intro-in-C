#include <stdio.h>

int fun(int *suma, int *razlika, int a, int b)
{

  *suma = ((a * a) + (2 * a * b) + (b * b));
  *razlika = ((a * a) - (2 * a * b) + (b * b));
}

int main()
{

  int a, b;
  int suma, razlika;

  printf("Unesite dva broja: ");
  scanf("%d %d", &a, &b);

  fun(&suma, &razlika, a, b);

  printf("Suma kvadrata je %d, a razlika je %d", suma, razlika);

  return 0;
}

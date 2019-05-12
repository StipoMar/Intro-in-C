#include <stdio.h>

int zbroji(int unos)
{
  int zbroj = 0;

  while (1)
  {
    if (unos == 0 && zbroj > 9)
    {
      unos = zbroj;
      zbroj = 0;
    }
    if (unos != 0)
    {
      zbroj += unos % 10;
      unos /= 10;
    }
    if (unos == 0 && zbroj <= 9)
      break;
  }

  return zbroj;
}

int main()
{
  int unos = 0;

  printf("Upisite broj:");
  scanf("%d", &unos);

  printf("%d", zbroji(unos));
}
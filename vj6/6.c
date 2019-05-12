#include <stdio.h>

int fun(int br[], int n, int *parni, int *neparni)
{

  int i = 0, nep = 0, pa = 0;

  for (i = 0; i < n; i++)
  {
    if (i % 2 == 0)
      pa += br[i];
    else if (i % 2 == 1)
    {
      nep += br[i];
    }
  }
  *parni = pa;
  *neparni = nep;
}

int main()
{

  int br[5];
  int i = 0, parni, neparni;

  printf("Unesite 5 vrijdnosti: ");
  for (i = 0; i < 5; i++)
  {
    scanf("%d", &br[i]);
  }
  fun(br, 5, &parni, &neparni);

  printf("Zbroj parnih je: %d  \nZbroj neparnih je: %d", parni, neparni);

  return 0;
}
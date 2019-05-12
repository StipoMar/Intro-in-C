#include <stdio.h>

int fun(int br[], int n, int *jesu, int *nisu, int a, int b)
{

  int djeljivi = 0, nisudje = 0, i = 0;

  for (i = 0; i < n; i++)
  {
    if (br[i] % a != 0 && br[i] % b != 0)
      nisudje += br[i];
    else if (br[i] % a == 0 || br[i] % b == 0)
      djeljivi += br[i];
  }
  *jesu = djeljivi;
  *nisu = nisudje;
}

int main()
{

  int br[5];
  int a = 2, b = 3, i = 0;
  int jesu, nisu;

  printf("Unesite 5 vrijdnosti: ");
  for (i = 0; i < 5; i++)
  {
    scanf("%d", &br[i]);
  }

  fun(br, 5, &jesu, &nisu, a, b);

  printf("Suma djeljivih: %d \nSuma ne djeljivih: %d", jesu, nisu);

  return 0;
}
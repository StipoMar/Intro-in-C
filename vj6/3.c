#include <stdio.h>
#include <limits.h>

int fun(int br[], int n)
{

  int i = 0;
  int max = INT_MIN;

  for (i = 0; i < n; i++)
  {
    if (br[i] > max)
    {
      max = br[i];
    }
  }

  return max;
}

int main()
{

  int br[5];
  int i = 0;
  int max;

  printf("Unesite 5 vrijednosti: ");
  for (i = 0; i < 5; i++)
  {
    scanf("%d", &br[i]);
  }

  printf("Max je: %d ", fun(br, 5));

  return 0;
}
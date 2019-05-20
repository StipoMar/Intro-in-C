#include <stdio.h>
#include <stdlib.h>

int *fja(int *niz, int a, int n)
{

  int *niz2 = (int *)malloc(a * sizeof(int));
  int i;
  for (i = 0; i < n; i++)
  {
    niz2[i] = niz[i] * a;
  }

  return niz2;
}

int main()
{

  int *niz, *niz2;
  unsigned n, a, i;

  printf("Unesite n duzinu niza: ");
  scanf("%d", &n);

  niz = (int *)malloc(n * sizeof(int));

  if (niz == NULL)
    return 1;
  printf("Unesite %d elemenata: ", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &niz[i]);
  }

  printf("Unesite a: ");
  scanf("%d", &a);

  niz2 = fja(niz, a, n);

  for (i = 0; i < n; i++)
  {
    printf("%d, ", niz2[i]);
  }

  free(niz);
  free(niz2);

  return 0;
}
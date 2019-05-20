#include <stdio.h>
#include <stdlib.h>

int main()
{

  unsigned n, unos;
  int i = 0;
  scanf("%d", &n);
  int *a;
  a = (int *)malloc(n * sizeof(int));
  if (a == NULL)
    return 1;

  while (unos != -1)
  {
    scanf("%d", &unos);
    a[i] = unos;
    i++;
    if (i == (n - 1))
    {
      a = (int *)realloc(a, (n * 2 * sizeof(int)));
    }
  }

  int s = sizeof(a) / sizeof(a[0]);

  printf("%d", s);

  for (i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }

  return 0;
}
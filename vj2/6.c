#include <stdio.h>

int main()
{
  int r;
  int s;
  int n;
  printf("Unesi bros:");
  scanf("%d", &n);
  for (r = 0; r < ((2 * n) - 1); r++)
  {
    for (s = 0; s < n; s++)
    {
      if (s <= r && r <= (n - 1))
        printf("* ");
      if (s <= ((2 * (n - 1)) - r) && r >= n)
        printf("* ");
    }
    printf("\n");
  }
  return 0;
}

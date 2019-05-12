#include <stdio.h>

int brojac(int br)
{

  int ctr = 0;

  while (!(br & (1 << (sizeof(br)*8 - 1))))
  {
    br = (br << 1);
    ctr++;
  }

  return ctr;
}

int main()
{

  int br = 0;

  printf("Upisite broj: ");
  scanf("%d", &br);
  printf("%d", brojac(br));

  return 0;
}

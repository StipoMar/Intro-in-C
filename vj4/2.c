#include <stdio.h>

int set(int br, int bit)
{

  return br |= 1 << (bit - 1);
}

void provjera(int br, int bit)
{

  if (br & 1 << (bit - 1))
  {
    printf("Bit je setiran");
  }
  else
  {
    printf("Bit nije setiran");
  }
  printf("\n");
}

void bitbr(int br)
{
  for (int i = sizeof(int) * 8 - 1; i >= 0; i--)
  {
    if (br & 1 << i)
    {
      printf("1");
    }
    else
    {
      printf("0");
    }
  }
  printf("\n");
}

int main()
{

  int br = 0;
  int bit = 0;

  printf("Unesite broj: ");
  scanf("%d", &br);
  printf("Unesite bit: ");
  scanf("%d", &bit);

  bitbr(br);
  provjera(br, bit);
  printf("Novi broj je %d", set(br, bit));
  return 0;
}
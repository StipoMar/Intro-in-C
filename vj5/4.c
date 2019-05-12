/* 5.  Napisati funkciju koja za prirodan brojnrekurzivno raˇcuna sumu znamenaka */

#include <stdio.h>

int rek(int br)
{

  return br == 0 ? 0 : (br % 10) + rek(br / 10);
}
int main()
{

  unsigned int br = 0;

  printf("Unesite prirodan broj: ");
  scanf("%d", &br);

  printf("%d", rek(br));

  return 0;
}
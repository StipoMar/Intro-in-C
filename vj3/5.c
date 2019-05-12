#include <stdio.h>

int prijestupna(int god)
{

  if (god % 4 == 0 && god % 100 != 0 || god % 400 == 0)
    return 1;
}

int rockas(int god)
{
  int brojgod = 0;

  brojgod = (2019 - god) / 4;

  return brojgod;
}

int main()
{

  int god = 0;

  printf("Upisite prijestupnu godinu:");
  scanf("%d", &god);

  while (prijestupna(god) != 1)
  {
    printf("Upisite prijestupnu godinu: ");
    scanf("%d", &god);
  }

  printf("%d", rockas(god));
  return 0;
}
#include <stdio.h>

int prijestupna(int god)
{

  if (god % 4 == 0 && god % 100 != 0 || god % 400 == 0)
    return 1;
}

int validna(int a, int b, int c)
{
  if (a <= 12 && a > 0)
  {
    if (c > 1900 && c < 2019)
    {
      if (b >= 0 && b <= 31)
      {
        return 1;
      }
    }
  }
  return 0;
}

int main()
{

  int n = 1, god = 0, mj = 0, dan = 0;

  printf("Koliko provjera zelite? ");

  while (n > 0)
  {
    printf("Unesite datume: [Mjesec Dan Godina]");
    scanf("%d %d %d", &mj, &dan, &god);

    if (validna(mj, dan, god) == 0)
      printf("Nije validna \n");
    else if (validna(mj, dan, god) == 1 && prijestupna(god) != 1)
    {
      printf("Validna - nije prijestupna\n");
    }
    else if (validna(mj, dan, god) == 1 && prijestupna(god) == 1)
    {
      printf("Validna prijestupna\n");
    }
    n--;
  }
}

#include <stdio.h>
#include <ctype.h>

int asciioduzmi(char unos)
{

  return unos - 48;
}

int main()
{

  char unos = 0;
  int broj = 0;

  while (unos != 'q')
  {

    printf("Unesite brojeve: ");
    scanf(" %c", &unos);

    if (isdigit(unos))
    {
      broj = broj + asciioduzmi(unos);
      broj = broj * 10;
    }
  }

  printf("%d", broj / 10);

  return 0;
}
#include <stdio.h>
#include <ctype.h>

int main()
{

  char unos;
  int cases = 0;

  while (unos != '.')
  {

    printf("Upisite nesto : ");
    scanf(" %c", &unos);

    cases = (islower(unos)) ? 1 : (isupper(unos)) ? 2 : (isdigit(unos)) ? 3 : 4;

    switch (cases)
    {
    case 1:
      printf("Unos je malo slovo!");
      break;
    case 2:
      printf("Unos je veliko slovo!");
      break;
    case 3:
      printf("Unos je znamenka");
      break;
    default:
      printf("Unos nije slovo ni znamenka");
    }
  }
}
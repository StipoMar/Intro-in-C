#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

  char string[100] = "Daaasdasdaerer";
  char string2[100];
  int j = 0;

  int duljina = strlen(string);
  for (int i = 0; i < duljina; i++)
  {
    if (string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u')
    {
      string2[j] = string[i];
      j++;
    }
  }

  printf("%s", string2);

  return 0;
}
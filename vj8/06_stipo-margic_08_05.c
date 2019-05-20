#include <stdio.h>
#include <string.h>

int main()
{

  char str[150], str1[150], str2[150];
  int i, j;
  printf("Upisi prvi str: ");
  gets(str);
  printf("Upisi drugi str: ");
  gets(str1);
  printf("Upisi treci str: ");
  gets(str2);

  char str3[450];

  strcat(str, str2);
  strcat(str, str1);

  printf("%s", str);

  return 0;
}
#include <stdio.h>

void rek()
{
  int br = 0;
  printf("Upisi broj:");
  scanf("%d", &br);


  if (br != 0)
    rek();

  printf("%d,", br);
}

int main()
{

  rek();

  return 0;
}

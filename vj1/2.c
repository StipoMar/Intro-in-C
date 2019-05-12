#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {


    int a,b,x,y;


    printf("Unesite 2 broja.");
    scanf("%d %d", &a, &b);

    srand(time(NULL));

    y = a + rand()%(b-a+1);
    x = a + rand()%(b-a+1);

    printf("x: %d, y:%d", x,y);
    if (x > y)
        printf("x je veci");
    else
        printf("y je veci");



    return 0;
}

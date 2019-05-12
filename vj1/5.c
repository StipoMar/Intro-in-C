#include <stdio.h>

int main() {

    int iznos, kov5, kov2, kov1;

    printf("Unesite iznos: ");
    scanf("%d", &iznos);

    kov5=iznos/5;
    kov2=(iznos%5)/2;
    if(((kov5*5) + (kov2*2)) != iznos)
        kov1=1;
    else
        kov1=0;

    printf("%d %d %d", kov5, kov2, kov1);





    return 0;
}

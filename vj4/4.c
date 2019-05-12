#include <stdio.h>
#include <stdlib.h>

void veci(int dio){
    switch(dio){
    case 10 :
        printf("a");
        break;
    case 11 :
        printf("b");
        break;
    case 12 :
        printf("c");
        break;
    case 13 :
        printf("d");
        break;
    case 14 :
        printf("e");
        break;
    case 15 :
        printf("f");
        break;
    default:
        printf("%u", dio);
    }
}

void ispis(int br){
    unsigned k, dio;
    printf("Unesite bazu. ");
    scanf("%u", &k);

    if(k < 2 || k > 16){
        printf("Greška.");
        return;
    }

    while(br > 0){
        dio = br % k;
        veci(dio);
        br = br / k;
    }

}

int main(){
    int broj;
    printf("Unesite broj: ");
    scanf("%d", &broj);

    ispis(broj);

    return 0;
}

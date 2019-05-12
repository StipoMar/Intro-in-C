#include <stdio.h>

int okreni (n){

    int ostatak, okrenut = 0;


    while (n != 0) {
        ostatak = n%10;
        okrenut= okrenut*10 + ostatak;
        n=n/10;
    }

    printf("Okrenuti broj je: %d \n", okrenut);

    return 0;
}

int main(){


    int n = 0;

    while(n != 1000){


    printf("Unesite broj: ");
    scanf("%d", &n);

   if (n>0){
        okreni(n);
    } else {
    printf("Ne podrzava negativne brojeve..");
    break;
    }


}
return 0;
}

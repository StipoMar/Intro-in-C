#include <stdio.h>

int skalarni(int vek1[], int vek2[]){

    int rez = 0, i=0, a=0;
    for(i=0; i<3; i++){
        a=vek1[i]*vek2[i];
        rez+=a;
    }
    return rez;
}

int main(){




    int vek1[]={1,2,1};
    int vek2[]={2,1,2};

    printf("Rezultat je %d", skalarni(vek1, vek2));

    return 0;
}

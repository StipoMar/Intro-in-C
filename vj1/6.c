#include <stdio.h>

int main() {

    int pismeni, usmeni, ukupno;

    printf("Upisite postotak pismenog ispita: ");
    scanf("%d", &pismeni);

    printf("Upisite postotak usmenog ispita: ");
    scanf("%d", &usmeni);

    ukupno = 0.8*pismeni + 0.2*usmeni;

    switch(ukupno) {
    case 80 ... 100:
        printf("Izvrstan");
        break;
    case 65 ... 79:
        printf("Vrlo dobar");
        break;
    case 50 ... 64:
        printf("Dobar");
        break;
    case 40 ... 49:
        printf("Dovoljan");
        break;
    default:
        printf("Nedovoljan");
    }







    return 0;
}

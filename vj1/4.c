#include <stdio.h>
#include <limits.h>

int main () {
    unsigned short a;
    unsigned char b;

    printf("Unesite unsigned short: ");
    scanf("%hu", &a);

    printf("Unsigned char je: %hu", a % UCHAR_MAX);

    return 0;
}

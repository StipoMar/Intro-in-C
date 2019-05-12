#include <stdio.h>


int main()
{
    float a,b,c,d;

    printf("Unesite prvi interval:");
    scanf("%f %f", &a, &b);

    printf("Unesite drugi interval:");
    scanf("%f %f", &c, &d);

    if (a==c && b==d)
        printf("Intervali su jednaki.");
    else if ((a<c && b< c) || (c < a && d< a))
        printf("Nema presjeka");

    if (b==c)
        printf("Presjek je: %f", b );
    else if (d==a)
        printf("Presjek je: %f", d);

    if (a<c && c<b && b<d )
        printf("Presjek je: [%f, %f]", c,b);
    else if (c<a && a<d  && d<b)
        printf("Presjek je [%f, %f]", a,d);
    return 0;
}

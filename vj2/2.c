#include <stdio.h>
#include <limits.h>

int razlika(int a, int b)
{
    int rez;

    rez = a - b;

    printf("Rezultat je: %d - %d =  %d \n", a, b, rez);

    return 0;
}

int main()
{

    int num = -1;
    int nmax = INT_MIN;
    int nmin = INT_MAX;

    while (num)
    {

        if (num > nmax)
            nmax = num;
        else if (num < nmin)
            nmin = num;

        printf("Upisite broj: ");
        scanf("%d", &num);
    }
    razlika(nmax, nmin);
    return 0;
}
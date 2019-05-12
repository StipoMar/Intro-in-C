#include <stdio.h>

int prostTest(int n)
{
    int prost = 0;
    int i = 1;
    for (i = 1; i < n + 1; i++)
    {
        if (n % i == 0)
            prost++;
    }

    if (prost == 2)
        return 1;
}

int prost(int n)
{

    if (prostTest(n) == 1)
        return n;
    else
        return prost(n + 1);
}

int main()
{

    int n;

    printf("Unesite broj: ");
    scanf("%d", &n);

    printf("Veci prosti broj od %d je %d", n, prost(n + 1));

    return 0;
}

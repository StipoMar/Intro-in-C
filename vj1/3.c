#include <stdio.h>
#include <ctype.h>

int main() {

    char ch1,ch2, x,y;

    printf("Upisite dva slova");
    scanf("%c %c",  &ch1, &ch2);

    if(isalpha(ch1) && isalpha(ch2)){
        x=toupper(ch1);
        y=toupper(ch2);
        printf("Udaljenost izmecu %c i %c je %d", x, y, abs(x-y));
    } else if (!isalpha(ch1))
        printf("%c nije slovo", ch1);
     else if (!isalpha(ch2))
        printf("%c nije slovo", ch2);
    return 0;

}

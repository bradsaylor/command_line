#include <stdio.h>
int main(void)
{
    char a,b,cstring[35];
    int c;

    printf("please enter something");
    scanf("%c %c", &a, &b);
    while ((c = getchar()) != EOF && c != '\n')
        ;
    printf("thanks, now some more");
    fgets(cstring, 35, stdin);
    printf("OK: I got %c and %c and <<%s>>\n", a, b, cstring);
    return 0;
}

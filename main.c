#include <stdio.h>

int main(void)
{
    int a, b;
    char ch;
    printf("enter the calculation : ");
    scanf("%d %c %d", &a, &ch, &b);
    if (ch == '+')
        printf("%d+%d=%d", a, b, a+b);
    else if (ch == '-')
        printf("%d-%d=%d", a, b, a-b);    
    else if (ch =='*')
        printf("%d*%d=%d", a, b, a*b);
    else if (ch == '/')
        printf("%d/%d=%d", a, b, a/b);
    else
        printf("%d%%%d=%d", a, b, a%b);
    return 0;
}



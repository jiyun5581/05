#include <stdio.h>

int main(void)
{
    int a;
    printf("input an integer: ");
    scanf("%d",&a);
    if (a>0)
        printf("positive");
    else if (a == 0)
        printf("zero");
    else
        printf("negative");
    return 0;
}


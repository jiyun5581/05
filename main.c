#include <stdio.h>

int main(void)
{
    int a;
    int sum = 0;
    printf("input a number : ");
    scanf("%d", &a);

    for (int i = 0; i<=a; i++)
        sum += i;
    printf("The result is %d",sum);
    return 0;
}



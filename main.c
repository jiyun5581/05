#include <stdio.h>

int main(void)
{
    int num;
    printf("Input an integer:");
    scanf("%d",&num);
    if (num>0)
        printf("Absolute value : %d\n",num);
    else
        printf("Absolute value : %d\n", 0-num);
    return 0;
}



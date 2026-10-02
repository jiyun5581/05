#include <stdio.h>

int main(void)
{
    int a = 57, g, num=0;
    do
    {
        printf("Guess a number : ");
        scanf("%d", &g);
    
        if (g > a)
        {
            printf("high!\n");
            num+=1;
        }
        else if (g<a)
        {
            printf("low!\n");
            num+= 1;
        }
        else
        {
            num+=1;
            printf("Congratulation! trials : %d\n",num);
        }
        } while (g != a);
    return 0;
}



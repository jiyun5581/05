#include <stdio.h>

int main(void)
{
    char a;
    int count = 0;
    printf("Input the sentence : ");
    while ((a= getchar()) != '\n')
    {
        if (a>='0' && a<= '9')
            count++;
    }
    printf("There are %d digits!\n", count);
    return 0;
    
}



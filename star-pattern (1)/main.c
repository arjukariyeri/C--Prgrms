#include<stdio.h>
int main()
{
    int i,j,a=5;
    for(i=0;i<=a;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
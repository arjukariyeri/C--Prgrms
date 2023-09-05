#include<stdio.h>
int main()
{
    int num1=0,num2=1,num3,limit,i;
    printf("Enter the limit :");
    scanf("%d",&limit);
    printf("%d\n%d\n",num1,num2);
    for(i=2;i<=limit;i++)
    {
        num3=num1+num2;
        printf("%d\n",num3);
        num1=num2;
        num2=num3;
        
    }
        return 0;
    }


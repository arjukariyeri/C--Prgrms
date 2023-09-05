#include<stdio.h>
int main()
{
    int num,n,r,result=0;
    printf("Enter a number :");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
    r=n%10;
    result=result+(r*r*r);
    n=n/10;
    }
    if(result==num)
    {
    printf("Enterd Number is Armstrong");
    }
    else
    {
        printf("Enterd Number is not Armstrong");
    }
    return 0;
}
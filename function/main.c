#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    sum(a,b);
    return 0;
}
int sum(int a,int b)
{
    printf("Sum of two numbers is :%d",a+b);
    return 0;
}



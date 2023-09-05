#include<stdio.h>
int main()
{
    int num,n,result;
    printf("Enter a two digit number :");
    scanf("%d",&num);
    num=n;
    while(n!=0)
    {
        n=n%10;
        result=result+n;
        n=n/10;
    }
printf("sum of digits :",result);
return 0;
}

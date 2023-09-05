#include<stdio.h>
int main()
{
    int num,n,result,r;
    printf("Enter a number :");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        r=n%10;
        result=(result*10)+(r);
        n=n/10;
    }
if(result==num)
{
    printf("Entered number is palindrome");
}
else
{
  printf("Entered number is  not palindrome");   
}
return 0;
}

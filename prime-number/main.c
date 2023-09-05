#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int i,prime=0;
    for(i=2;i<n;i++)
    {
       if(n%i==0)
       prime=1;
       break;
    
    }
       if(prime==0) 
        {
        printf("Entered number is prime number ");
        }
        else
        {
        printf("Entered number is not prime number ");
        }
    return 0;
    
}
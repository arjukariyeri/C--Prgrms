#include<stdio.h>
int insertsortarray(int arr[],int n,int key,int capacity)
{
 
 if(n>=capacity)
 return n;
 int i;
 for(i=n-1;i>=0 && arr[i]>key;i--)
 arr[i+1]=arr[i];
 arr[i+1]=key;
 return (n+1);
}
int main()
{
    int key=16;
    int arr[20]={2,5,8,10,23,25};
    int capacity=sizeof(arr)/sizeof(arr[0]);
    int i,n=6;
    printf("Before sorting : ");
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
    n=insertsortarray(arr,n,key,capacity);
    printf("\nAfter sorting  : ");
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
    return 0;
}

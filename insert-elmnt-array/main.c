#include<stdio.h>
int insertelmnt(int arr[],int n,int key,int capacity)
{
    if(n>=capacity)
    return n;
    
arr[n]=key;
return (n+1);
    
}

    int main()
    {
        int arr[20]={1,6,8,10,12,16};
        int capacity=sizeof(arr)/sizeof(arr[0]);
        int i,key=21;
        int n=6;
        printf("Before insertion :\t");
        for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
        n=insertelmnt(arr,n,key,capacity);
        printf("\nAfter insertion :\t");
        for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
        return 0;
    }

#include<stdio.h>
 int binarysearch(int arr[],int low,int high,int key)
 {
    if(high<low)
    return -1;
    int mid=(high+low)/2;
    if(arr[mid]==key)
    return mid;
    if(key>arr[mid])
    return binarysearch(arr,(mid+1),high,key);
    return binarysearch(arr,low,(mid-1),key);
}
int main()
{
    int key=8;
    int arr[]={2,4,6,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("element found at index %d",binarysearch(arr,0,n-1,key));
    return 0;
}
#include<stdio.h>
int findelement(int arr[], int n, int key)
{
    int i;
for(i=0;i<n;i++)
if(arr[i]==key)
return i;
  return -1;
}
int main()
{
    int arr[] = {1,2,5,8,10,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key=10;
    int position=findelement(arr,n,key);
    if(position==-1)
    printf("element is not found");
    else
    {
    printf("element is found");
    }]
    return 0;
}



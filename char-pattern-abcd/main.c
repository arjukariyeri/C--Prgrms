#include<stdio.h>
int main()
{
    char i,j;
    char n='A';
    for(i='A';i<='E';i++)
     {
         for(j='A';j<i;j++)
         printf("%c",j);
         printf("\n");
         n++;
     }
     return 0;
}

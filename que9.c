
// program in c read n number of values in an array and display it in reverse order..
#include<stdio.h>
int main ()
{
    int a[10],i;
    printf("enter 10 numbers\n");
    for(i=0; i<=9; i++)
     scanf("%d",&a[i]);
     printf("now array is in reverse order\n");
     for(i=9; i>=0;  i--)
     printf("%d ",a[i]);

     return 0;
 }
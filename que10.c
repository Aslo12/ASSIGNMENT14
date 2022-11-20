//PROGRAM FOR COPY THE ELEMENT OF ONE ARRAY INTO ANOTHER ARRAY..

#include<stdio.h>
int main ()
{
    int a[10], b[10],i;
    printf("enter 10 numbers\n");
    for(i=0; i<=9; i++)
     scanf("%d",&a[i]);
     printf("copy array is ::\n");
     for(i=0; i<=9;  i++)
     b[i]=a[i];
     for(i=0; i<=9; i++)
     printf("%d ",b[i]);

     return 0;
 }
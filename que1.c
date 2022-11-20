//write a program to calculate the sum of numbers stored in an array of size 10.

#include<stdio.h>
int main()
{
    int a[10],sum=0,i;
  
    
    printf("\n enter 10 numbers\n");
    for(i=0; i<=9; i++)
    {
    scanf("%d",&a[i]);
    }
     sum=sum + a[i];
    printf("sum is : %d",sum);

   
    return 0;
}

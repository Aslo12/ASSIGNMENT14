//PROGRam  TO CALCULATE THE SUM OF ALL EVEN NUMBER AND SUM OF ALL ODD NUMBER..
#include<stdio.h>
int main()
{
    int a[10],se=0, so=0,i;
  
    printf("\n enter 10 numbers\n");
    for(i=0; i<=9; i++)
    scanf("%d",&a[i]);
    for(i=0; i<=9; i++)
    {
        if(a[i]%2==0)
     se=se + a[i];
     else
      so=so + a[i];
    }
    printf("sum of even number is : %d",se);
      printf("\nsum of odd number is : %d",so);
   
    return 0;
}
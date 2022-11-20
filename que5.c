
//program to find the smallest number in array..
#include<stdio.h>
int main()
{
  int a[10],i,min;
  printf ("enter 10 number \n");
  for(i=0; i<=9; i++)
  scanf("%d",&a[i]);
  for (i=0; i<=9; i++)
  {
    if(min > a[i])
    min=a[i];
  }
  printf("%d", min);
  return 0;

}
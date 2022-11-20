//program to find the greatest number in array..
#include<stdio.h>
int main()
{
  int a[10],i,max=-1;
  printf ("enter 10 number \n");
  for(i=0; i<=9; i++)
  scanf("%d",&a[i]);
  for (i=0; i<=9; i++)
  {
    if(max < a[i])
    max=a[i];
  }
  printf("%d", max);
  return 0;

}
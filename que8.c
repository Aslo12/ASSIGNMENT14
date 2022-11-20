//FIND SECOND SMALLEST IN GIVEN ARRAY..
#include<stdio.h>
int main()
{
    int a[10],i, n,s1,s2;
    printf("emter the size of the array :\n");
    scanf("%d",&n);
    printf("enter the value of in the array :\n");
    for(i=1; i<=n-1; i++)
    {
        scanf("%d ",&a[i]);

    }
      s1=a[0];       
      for(i=1; i<=n-1; i++)
      {
        if(a[i] < s1 )
        {
         s2=s1;
        s1=a[i];
        
        }
        else if(a[i]<s2 && a[i]>s1)
        {
          
            s2=a[i];
        }

      }
           printf("the smallest value in the array is :%d",s1);
           printf("\nthe second smallest value in the array is :%d",s2);
           return 0;

}
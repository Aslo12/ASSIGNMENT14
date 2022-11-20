//FIND SECOND LARGEST IN GIVEN ARRAY..
#include<stdio.h>
int main()
{
    int a[10],i, n,l1,l2;
    printf("emter the size of the array :\n");
    scanf("%d",&n);
    printf("enter the value of in the array :\n");
    for(i=1; i<=n-1; i++)
    {
        scanf("%d ",&a[i]);

    }
     l1=a[i];
       
      for(i=1; i<=n-1; i++)
      {
        if(a[i] >l1 )
        {
         l2=l1;
        l1=a[i];
        
        }
        else if(a[i]>l2 && a[i]<l1)
        {
          
            l2=a[i];
        }

      }
           printf("the largest value in the array is :%d",l1);
           printf("\nthe second largest value in the array is :%d",l2);
           return 0;

}
#include <stdio.h>
int main()
{

	int j,n,i,k;
	int a[]={10000,6998,99,666,9,3,4,5,9,10};
    int temp;
    n=10;
	for(i=1;i<n;i++)
	{
        temp=a[i];
		j=i-1;
        if(temp<a[j])
        {
            while(a[j]>temp&&j>-1)
            {
                a[j+1]=a[j];
                j--;
            }
        }
		 a[j+1]=temp;
		 for(k=0;k<n;k++)
			{
			printf("%d ",a[k]);
		}
		 printf("\n");
	}
	printf("result:");
	for(i=0;i<n;i++)
	{
   printf("%d ",a[i]);
	}
	printf("\n");
   return 0;
}//Ö±½Ó²åÈëÅÅÐò

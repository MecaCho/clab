#include <stdio.h>
int j,n,i,k,dk;
int temp;
void insert(int a[],int n,int dk)
{
	printf("%d\n",dk);
	for(i=dk;i<n;i++)
	{
        temp=a[i];
		j=i-dk;
        if(temp<a[j])
        {
            while(a[j]>temp)
            {
                a[j+dk]=a[j];
                j-=dk;
            }
        }
		 a[j+dk]=temp;
		 for(k=0;k<n;k++)
			{
			printf("%d ",a[k]);
		}
		 printf("\n");
	}
}
int main()
{
	int a[]={10000,6998,99,666,9,3,4,5,9,10};
	n=10;
	dk=n/2;
	while(dk>=1)
	{
		insert(a,n,dk);
		dk/=2;
	}
	printf("result:");
	for(i=0;i<n;i++)
	{
   printf("%d ",a[i]);
	}
	printf("\n");
   return 0;
}//Shell排序
#include <stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int insertsort()
{

	int j,n,i;
	int a[]={1,6,9,3,4,5,9,10};
	n=10;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i]) swap(&a[j],&a[i]);
		}
	}
	for(i=0;i<n;i++)
	{
   printf("%d ",a[i]);
	}
   return 0;
}//Ö±½Ó²åÈëÅÅÐò

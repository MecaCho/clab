#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a[10]={2,4,6,7,8,9,10,33,99,78};
	int i,j,n;
	n=10;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1]) swap(&a[j],&a[j+1]);
		}
		printf("%d ",a[j]);
	}
	printf("\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);

}
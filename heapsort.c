#include<stdio.h>
void Heap(int a[],int f,int len)
{
    int temp;
	int child;
	temp=a[f];
	child=f*2+1;
	while(child<len)
	{
		if(a[child]<a[child+1]&&(child+1<len))
		{
			++child;
		}
		if(a[f]<a[child])
		{
			a[f]=a[child];
			f=child;
			child=2*f+1;
		}
		else {break;}
		a[f]=temp;
	}
}
int main()
{
	int i,len,tem;
	int a[]={100,39,87,99,28,55,3,6,8,9,1000,998,666,888,88};
	len=15;
	for(i=len/2-1;i>-1;i--)
	{
		Heap(a,i,len);
	}
	for(i=len-1;i>0;i--)
	{
		tem=a[i];
		a[i]=a[0];
		a[0]=tem;
		Heap(a,0,i);
		printf("%d\n",a[i]);
	}
	printf("result: ");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
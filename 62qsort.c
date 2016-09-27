#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
	return *(int*)a-*(int*)b;
}
int main()
{
	int n,i;
	int a[100];
	while(scanf("%d",&n)!=EOF)
	{
		i=0;
		while(i<n)
		{
			scanf("%d",&a[i++]);
		}
		qsort(a,n,sizeof(int),cmp);
		i=0;
		while(i<n)
		{
			printf("%d\n",a[i++]);
		}
	}
	return 0;
}
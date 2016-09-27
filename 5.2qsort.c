#include <stdio.h> 
int a[101],n;//定义全局变量，这两个变量需要在子函数中使用 
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void quicksort(int left,int right) 
{ 
    int i,j,t,temp; 
    if(left>right) 
       return;                                
    temp=a[left]; //temp中存的就是基准数 
    i=left; 
    j=right; 
    while(i!=j) 
    { 
                   while(a[j]>=temp && i<j) 
                           j--; 
                   while(a[i]<=temp && i<j) 
                            i++;  
                   if(i<j) 
                   { 
					   swap(&a[i],&a[j]);
                   } 
    } 
    a[left]=a[i]; 
    a[i]=temp; 
                             
    quicksort(left,i-1);//继续处理左边的，这里是一个递归的过程 
    quicksort(i+1,right);//继续处理右边的 ，这里是一个递归的过程 
} 
int main() 
{ 
    int i,j,t; 
    scanf("%d",&n); 
    for(i=1;i<=n;i++) 
         scanf("%d",&a[i]); 
    quicksort(1,n);                               
    for(i=1;i<=n;i++) 
        printf("%d ",a[i]); 
    return 0; 
} 






/*#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int Loc(int a[],int low,int high)
{
	int tem;
	tem=a[low];
	while(low<high)
	{
		while(a[high]>=tem && low<high) --high;
		swap(&a[low], &a[high]);  
		while(a[low]<=tem && low<high) ++low;
		swap(&a[low], &a[high]);  
	}
	return low;
}
void qsort(int a[],int low,int high)
{
	int loc;
	loc=Loc(a,low,high);
	qsort(a,low,loc-1);
	qsort(a,loc+1,high);
}
int main()
{
	int a[]={9999,4,6,9,1000,99,88,78,909,198};
	int n,i;
	n=10;
	qsort(a,0,9);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}*/
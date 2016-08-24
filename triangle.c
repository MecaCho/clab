#include<stdio.h>
int main()
{
    int a[3],temp,t,i,j;
    while(scanf("%d %d %d",&a[0],&a[1],&a[2])!=EOF)
    {
        for(i=0;i<2;i++)
        {
            for(j=i;j<3;j++)
            {
                if(a[j]<a[i])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        t=a[2]*a[2]-a[1]*a[1]-a[0]*a[0];
        if(t>0) printf("钝角三角形\n");
        else if(t==0) printf("直角三角形\n");
        else printf("锐角三角形\n");
    }
    return 0;
}
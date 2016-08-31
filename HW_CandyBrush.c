#include<stdio.h>
#include<string.h>
char a[5][5];
int judge(char s)
{
	int sum=0;
	int i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			if(s==a[i][j]) sum++;
	if(sum>=3) return 1;
	else return 0;
}
int fun()
{
    int i,j,ii,jj;
    char temp;
    char b,c;
    for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				temp=a[i][j];
				if(judge(temp))
				{
					if(j+1<5)
					{
						for(jj=j+1;jj<5;jj++)
						{
							b=a[i][jj];
							if(b==temp&&jj-j==1) return 5*i+j-1;
							if(b==temp&&jj-j==2) return 5*i+j+1;
						}
					}
					if(i+1<5)
					{
						for(ii=i+1;ii<5;ii++)
						{
							c=a[ii][j];
							if(c==temp&&ii-i==1) return 5*(i-1)+j;
							if(c==temp&&ii-i==2) return 5*(i+1)+j;
						}
					}
				}
			}
		}
	return 0;
}
int main()
{
	int i,j;
	char str[25]="abcdefghijklmnopqrstuvwxy";
	int min;
	while(scanf("%s",str)!=EOF)
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				
				a[i][j]=str[i*5+j];
			}
		}
		min=fun();
		if(min!=0) printf("Yes %d\n",min);
		else printf("No\n");
	}
	printf("Hello");
	return 0;
}
2016/8/18 19:30:36
田雨 2016/8/18 19:30:36
#include<stdio.h>
#include<string.h>
char a[5][5];
int judge(char s)
{
	int sum=0;
	int i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			if(s==a[i][j]) sum++;
	if(sum>=3) return 1;
	else return 0;
}
int fun()
{
    int i,j,ii,jj;
    char temp;
    char b,c;
    for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				temp=a[i][j];
				if(judge(temp))
				{
					if(j+1<5)
					{
						for(jj=j+1;jj<5;jj++)
						{
							b=a[i][jj];
							if(b==temp&&((jj-j)==1)) return 5*i+j-1;
							if(b==temp&&((jj-j)==2)) return 5*i+j+1;
						}
					}
					if(i+1<5)
					{
						for(ii=i+1;ii<5;ii++)
						{
							c=a[ii][j];
							if(c==temp&&((ii-i)==1)) return 5*(i-1)+j;
							if(c==temp&&((ii-i)==2)) return 5*(i+1)+j;
						}
					}
				}
			}
		}
	return 0;
}
int main()
{
	int i,j;
	char str[25]="abcdefghijklmnopqrstuvwxy";
	int min;
	while(scanf("%s",str)!=EOF)
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				
				a[i][j]=str[i*5+j];
			}
		}
		min=fun();
		if(min!=0) printf("Yes %d\n",min);
		else printf("No\n");
	}
	printf("Hello");
	return 0;
}

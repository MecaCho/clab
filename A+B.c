#include<stdio.h>
int main()
{
    int i,j;
    long a,b;
    char s[15],t[15];
    while(scanf("%s %s",&s,&t)!=EOF)
    {
        a=0;
        for(i=0;s[i]!='\0';i++)
        {
         
            if(s[i]>='0' && s[i]<='9' && s[i]!='-')
                a=a*10+(s[i]-'0');
        }
        if(s[0]=='-') a=-a;
        b=0;
        for(j=0;t[j]!='\0';j++)
        {
            if(t[j]>='0' && t[j]<='9' && t[i]!='-')
                b=b*10+(t[j]-'0');
        }
        if(t[0]=='-') b=-b;
        printf("%ld\n",a+b);
 
    }
    return 0;
}
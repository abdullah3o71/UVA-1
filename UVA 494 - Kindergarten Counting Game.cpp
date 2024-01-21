#include<stdio.h>
#include<string.h>
int main()
{
    int i,flag,count=0;
    char c[1001];
    while(gets(c) != NULL)// we can also write while(gets(c))
    {
        for(i=0;c[i]!='\0';i++)
        {
            if((c[i]>='A' && c[i]<='Z') || (c[i]>='a' && c[i]<='z'))
            {
                flag=1;
            }
            else
            {
                if(flag==1)// we can also write if(flag)
                {
                    count++;
                    flag=0;
                }
            }
        }
        printf("%d\n", count);
        count=0;
    }
    return 0;
}
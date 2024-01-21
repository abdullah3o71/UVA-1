#include<stdio.h>
#include<math.h>
int main()
{
    int arr[3000],diff[3000],test[3000];
    int n,i,j,count,flag;
    while(scanf("%d", &n) != EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d", &arr[i]);
        }
        for(i=0;i<(n-1);i++)
        {
            diff[i]=abs(arr[i]-arr[i+1]);
        }
        count=1;
        for(i=0;i<(n-1);i++)
        {
            test[i]=count;
            count++;
        }
        flag=0;
        for(i=0;i<(n-1);i++)
        {
            for(j=0;j<(n-1);j++)
            {
                if(test[i]==diff[j])
                    {
                       flag=1;
                    }
            }
            if(flag==1)
            {
                flag=0;
            }    
            else
            {
                flag=2;
                break;
            }
        }
        if(flag==2)
        {
            printf("Not jolly\n");
        }    
        else
        {
            printf("Jolly\n");
        }    
    }
    return 0;
}
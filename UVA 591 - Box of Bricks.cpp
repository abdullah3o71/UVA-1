#include<stdio.h>
int main()
{
    int stackHeight[200];
    int i,numOfStacks,division;
    int sum1=0,sum2=0,count=0;

    while(scanf("%d", &numOfStacks) != EOF)
    {
        if (numOfStacks == 0)
        {
            break;
        }
        for(i=0;i<numOfStacks;i++)
        {
            scanf("%d", &stackHeight[i]);
        }
        for(i=0;i<numOfStacks;i++)
        {
            sum1=sum1+stackHeight[i];
        } 

        division=sum1/numOfStacks;
        
        for(i=0;i<numOfStacks;i++)
        {
            if(stackHeight[i]>division)
            {
                int sub=stackHeight[i]-division;
                sum2=sum2+sub;
            }
        }
        count++;
        printf("Set #%d\n", count);
        printf("The minimum number of moves is %d.\n", sum2);
        sum1=0;
        sum2=0;
    }
    return 0;
}
#include <stdio.h>
int main()
{
    unsigned long long num,reverseNum,temp;
    int iteration,test;
    while(scanf("%d", &test) != EOF)
    {
        while(test--)
        {
            iteration=0;
            scanf("%llu", &num);
            while(1)
            {
                temp=num;
                reverseNum=0;
                while(num!=0)
                {
                    reverseNum=reverseNum*10+num%10;
                    num=num/10;
                }
                if(reverseNum==temp)
                {
                    printf("%d %llu\n", iteration, reverseNum);
                    break;
                }
                else
                {
                    num=temp+reverseNum;
                    iteration++;
                }
                
            }
        }
    }
    return 0;
}
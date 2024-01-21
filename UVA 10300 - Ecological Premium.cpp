#include<stdio.h>
int main()
{
   int i,testcase,sum;
   int numOfFarmer,sizeOfFarm,numOfAnimal,friendliness;
   while(scanf("%d", &testcase) != EOF)
   {
        while(testcase--)
        {
            sum=0;
            scanf("%d", &numOfFarmer);
            for(i=1;i<=numOfFarmer;i++)
            {
                scanf("%d %d %d", &sizeOfFarm, &numOfAnimal, &friendliness);
                sum+=(sizeOfFarm*friendliness);
            }
        printf("%d\n", sum);
        }
    }
    return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                0;
}
#include<stdio.h>
int main()
{
    unsigned long long int num1,num2;
    int carryCount,carry;
    while(scanf("%llu %llu", &num1, &num2) != EOF) 
    {
        if (num1==0 && num2==0)
        {
            break;
        }
        carryCount=0;
        carry=0;
        while (num1>0 || num2>0) 
        {
            carry=((num1%10)+(num2%10)+carry)/10;
            num1=num1/10;
            num2=num2/10;
            carryCount=carryCount+carry;
        }
        if(carryCount==0) 
        {
            printf("No carry operation.\n");
        }
        else
        {
            printf("%d carry operation%s.\n", carryCount, (carryCount>1)?"s":"");
        }
    }
    return 0;
}

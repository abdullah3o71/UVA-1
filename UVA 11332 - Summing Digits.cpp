#include<stdio.h>
int main()
{
    int num;
    int sumOfDigits;
    while(scanf("%d",&num) != EOF)
    {
        if(num==0) 
        {
            break;
        }
        while(num/10!=0)
        {
            sumOfDigits=0;
            while(num!=0)
            {
                sumOfDigits=sumOfDigits+num%10;
                num=num/10;
            }
            num=sumOfDigits;
        }
        printf("%d\n",num);
    }
    return 0;
}
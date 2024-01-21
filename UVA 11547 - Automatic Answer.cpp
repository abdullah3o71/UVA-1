#include<stdio.h>
#include<math.h>
int main()
{
    int num,calc,tensDigit,test;
    while(scanf("%d", &test) != EOF)
    {
        while(test--)
        {
            scanf("%d", &num);
            calc=(((((num*567)/9)+7492)*235)/47)-498;
            tensDigit=abs((calc/10)%10);
            printf("%d\n", tensDigit);
        }
    }
    return 0;
}
#include<stdio.h>
int main()
{
    printf("The 1500'th ugly number is 859963392.\n");
    return 0;
}
/*
//Calculation of finding the 1500'th ugly number.
#include<stdio.h>
int main()
{
    long int num,i,count=0;
    for(i=1;;i++)
    {
        num=i;
        while(num!=1)
        {
            if(num%2==0) num=num/2;
            else if(num%3==0) num=num/3;
            else if(num%5==0) num=num/5;
            else break;
        }
        if(num==1) count++;
        if(count==1500) break;
    }
    printf("The 1500'th ugly number is %ld.\n", i);
    return 0;
}
*/

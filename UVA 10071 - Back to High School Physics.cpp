#include<stdio.h>
int main()
{
    long long int v,t,displacement;
    while(scanf("%lld %lld", &v, &t) != EOF)
    {
        displacement=v*2*t;
        printf("%lld\n",displacement);
    }
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    long int nthBulb,root;
    while(scanf("%lld", &nthBulb) != EOF)
    {
        if(nthBulb==0)
        {
            break;
        }
        root=sqrt(nthBulb);
        if(nthBulb==root*root)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}
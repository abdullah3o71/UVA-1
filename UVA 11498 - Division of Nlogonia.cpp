#include<stdio.h>
int main()
{
    int x,y,p,q,test;
    while(scanf("%d", &test) !=  EOF)
    {
        scanf("%d %d", &x, &y);//The coordinates of the division point is (x,y)
        while(test--)
        {
            scanf("%d %d", &p, &q);//The coordinates of a residence is (p,q)
            if(p==x || q==y)
            {
                printf("divisa\n");
            }
            else if((p-x)>0 && (q-y)>0)
            {
                printf("NE\n");
            }
            else if((p-x)<0 && (q-y)>0)
            {
                printf("NO\n");
            }
            else if((p-x)<0 && (q-y)<0)
            {
                printf("SO\n");
            }
            else if((p-x)>0 && (q-y)<0)
            {
                printf("SE\n");
            }
        }
    }
    return 0;
}
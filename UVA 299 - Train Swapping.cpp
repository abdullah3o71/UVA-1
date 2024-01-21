#include <stdio.h>
int main() 
{
    int test,len,temp,swaps=0;
    int carriages[60];
    int i,j;

    while(scanf("%d", &test) != EOF)
    {
        while(test--) 
        {
            swaps=0;
            scanf("%d", &len);
            for (i=0;i<len;i++) 
            {
                scanf("%d", &carriages[i]);
            }

            for (i=0;i<(len-1);i++) 
            {
                for (j=i+1;j<len;j++) 
                {
                    if (carriages[i]>carriages[j])
                    {
                        temp = carriages[i];
                        carriages[i] = carriages[j];
                        carriages[j] = temp;
                        swaps++;
                    }
                }
            }
            
            printf("Optimal train swapping takes %d swaps.\n", swaps);
        }
    }
    return 0;
}

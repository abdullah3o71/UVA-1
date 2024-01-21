#include<stdio.h>
int main()
{
    char character;
    int count=0;
    while (scanf("%c", &character) != EOF)
    {
        if(character=='"')
        {
            count++;
            if(count%2!=0)
            {
                printf("``");
            }
            else if(count%2==0)
            {
                printf("''");
            }
        }
        else
        {
            printf("%c",character);
        }
    }
    return 0;
}

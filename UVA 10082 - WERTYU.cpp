#include<stdio.h>
int main()
{
    char key;
    while(scanf("%c", &key) != EOF)
    {
        if(key=='1') 
            printf("`");
        else if(key=='2')
            printf("1");
        else if(key=='3')
            printf("2");
        else if(key=='4')
            printf("3");
        else if(key=='5')
            printf("4");
        else if(key=='6')
            printf("5");
        else if(key=='7')
            printf("6");
        else if(key=='8')
            printf("7");
        else if(key=='9')
            printf("8");
        else if(key=='0')
            printf("9");
        else if(key=='-')
            printf("0");
        else if(key=='=')
            printf("-");
        else if(key=='W')
            printf("Q");
        else if(key=='E')
            printf("W");
        else if(key=='R')
            printf("E");
        else if(key=='T')
            printf("R");
        else if(key=='Y')
            printf("T");
        else if(key=='U')
            printf("Y");
        else if(key=='I')
            printf("U");
        else if(key=='O')
            printf("I");
        else if(key=='P')
            printf("O");
        else if(key=='[')
            printf("P");
        else if(key==']')
            printf("[");
        else if(key=='\\')
            printf("]");
        else if(key=='S')
            printf("A");
        else if(key=='D')
            printf("S");
        else if(key=='F')
            printf("D");
        else if(key=='G')
            printf("F");
        else if(key=='H')
            printf("G");
        else if(key=='J')
            printf("H");
        else if(key=='K')
            printf("J");
        else if(key=='L')
            printf("K");
        else if(key==';')
            printf("L");
        else if(key=='\'')
            printf(";");
        else if(key=='X')
            printf("Z");
        else if(key=='C')
            printf("X");
        else if(key=='V')
            printf("C");
        else if(key=='B')
            printf("V");
        else if(key=='N')
            printf("B");
        else if(key=='M')
            printf("N");
        else if(key==',')
            printf("M");
        else if(key=='.')
            printf(",");
        else if(key=='/')
            printf(".");
        else if(key==' ')
            printf(" ");
        else if(key=='\n')
            printf("\n");
    }
    return 0;
}

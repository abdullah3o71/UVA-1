#include <stdio.h>

int main() {
    int employ1sal, employ2sal, employ3sal, midSalary;
    int testCase,i;
    scanf("%d", &testCase);
    for (i=1;i<=testCase;i++)
    {
        scanf("%d %d %d", &employ1sal, &employ2sal, &employ3sal);
        if ((employ1sal >= employ2sal && employ1sal <= employ3sal) || (employ1sal >= employ3sal && employ1sal <= employ2sal))
            midSalary = employ1sal;
        else if ((employ2sal >= employ1sal && employ2sal <= employ3sal) || (employ2sal >= employ3sal && employ2sal <= employ1sal))
            midSalary = employ2sal;
        else
            midSalary = employ3sal;
        printf("Case %d: %d\n", i, midSalary);
    }
     return 0;
}
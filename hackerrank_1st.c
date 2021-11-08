#include <stdio.h>

int solveMeFirst(int num1,int num2)
{
    int sum=num1+num2;

    return sum;
}

int main()
{
    int a,b,sum;
    scanf("%d %d",&a,&b);
    sum = solveMeFirst(a,b);
    printf("%d\n",sum);

    return 0;
}
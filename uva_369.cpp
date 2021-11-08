#include <bits/stdc++.h>
using namespace std;

double fact(double N)
{
    double res=1;
    for(int i = 2;i<=N;i++){
        res = res*i;
    }

    return res;
}

double combination(double N,double M)
{
    return fact(N)/(fact(M)*fact(N-M));
}

int main()
{
    double N,M,C;

    while (scanf("%lf %lf",&N,&M),N)
    {
        C = combination(N,M);
        printf("%.0lf things taken %.0lf at a time is %.0lf exactly.\n",N,M,C);
    }
    return 0;
}
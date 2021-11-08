#include <bits/stdc++.h>
using namespace std;

int uva_100(int i, int j)
{
    int x,c=1,max=0,temp;
    if(i>j){
        temp = i;
        i=j;
        j=temp;
    }
    while(i<=j)
    {
        x=i;
        while(x!=1)
        {
            if(x%2==0) x/=2;
            else x=(3*x)+1;
            c++;
            if(x==1) break;
        }
        if(c>max){
            max=c;
        }
        c=1;
        i++;
    }
    return max;
}

int main()
{
    int a,b,cnt;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        cnt=uva_100(a,b);
        printf("%d %d %d\n",a,b,cnt);
    }
    return 0;
}
#include <stdio.h>

int gcd(int n1,int n2)
{
    if(n1%n2==0){
        return n2;
    }
    else
    {
        return gcd(n2,n1%n2);
    }
    
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c=0,i,h;
        scanf("%d %d",&a,&b);
        h=gcd(a,b);
        for(i=1;i*i<=h;i++){
            if(h%i==0){
                c=c+2;
            }
        }
        i=i-1;
        if(i*i==h){
            c--;
        }
        printf("%d\n",c);
    }

    return 0;
}
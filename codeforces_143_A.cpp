#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r1,r2,c1,c2,d1,d2,x,a,b,c,d=0;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    for(x=1;x<=9;x++){
        a=r1-x;
        b=c1-x;
        c=r2-c1+x;
        if((a+x==r1)&&(b+c==r2)&&(x+b==c1)&&(a+c==c2)&&(x+c==d1)&&(a+b==d2)&&(x!=a&&x!=b&&x!=c&&a!=b&&a!=c&&b!=c)&&(x<=9&&a<=9&&b<=9&&c<=9)&&(x>0&&a>0&&b>0&&c>0)){
            printf("%d %d\n%d %d",x,a,b,c);
            break;
        }
        else
        {
            d++;
        }
        if(d==9){
            cout << "-1" << endl;
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i,x=0,y=0,z=0;
    cin >>a>>b;

    for(i=1;i<=6;i++){
        if(fabs(a-i)<fabs(b-i)){
            x++;
        }
        else if(fabs(a-i)>fabs(b-i)){
            z++;
        }
        else if (fabs(a-i)==fabs(b-i))
        {
            y++;
        }
    }

    printf("%d %d %d\n",x,y,z);

    return 0;
}
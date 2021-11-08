#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define endl '\n'

int main()
{
    SIS;
    int t,a,b,c,d,e,f,g,z=0;
    double x,y;
    cin >>t;

    while (t--)
    {
        cin >>a>>b>>c>>d>>e>>f>>g;
        if((e+f)>(e+g)){
            y = e+f;
        }
        else
        {
            y = e+g;
        }
        if(y>(f+g)){
            y = y;
        }
        else
        {
            y = f+g;
        }

        x = (a+b+c+d+(y/2.0));

        if(x>=90){
            printf("Case %d: A\n",++z);
        }
        else if(80<=x&&x<90){
            printf("Case %d: B\n",++z);
        }
        else if(70<=x&&x<80){
            printf("Case %d: C\n",++z);
        }
        else if(60<=x&&x<70){
            printf("Case %d: D\n",++z);
        }
        else
        {
            printf("Case %d: F\n",++z);
        }
    }
    

    return  0;

}
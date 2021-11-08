#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int r,R=0,W=0,b=0;
    string s;
    cin >> N;
    while(N--)
    {
        cin >> r >> s;

        if(s=="WD"||s=="N"){
            r++;
        }
        else if(s=="W"){
            W++;
            b++;
        }
        else if(s=="L"){
            b++;
        }
        R = R+r;

        printf("%d|%d|%d.%d\n",R,W,b/6,b%6);
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long d,ans=0;
    long long a[3];
    cin >> a[0] >> a[1] >> a[2] >> d;

    sort(a,a+3);

    if(a[0]!=a[1]&&a[0]!=a[2]&&a[1]!=a[2]){
        if(a[1]-a[0]<d && a[2]-a[1]<d){
            ans = ans + d -(a[1]-a[0]);
            ans = ans + d -(a[2]-a[1]);
        }
        if(a[1]-a[0]>=d && a[2]-a[1]<d){
            ans = ans + d -(a[2]-a[1]);
        }
        if(a[1]-a[0]<d && a[2]-a[1]>=d){
            ans = ans + d -(a[1]-a[0]);
        }
        if(a[1]-a[0]>=d && a[2]-a[1]>=d){
            ans = ans + 0;
        }
    }

    else if(a[0]==a[1]&&a[0]==a[2]&&a[1]==a[2]){
        ans = ans + 2*d;
    }
    else if(a[1]==a[2]&&a[0]!=a[1]){
        if(a[1]-a[0]>=d){
            ans = ans + d;
        }
        if(a[1]-a[0]<d){
            ans = ans + 2*d + a[0] - a[1];
        }
    }
    else if(a[1]==a[0]&&a[2]!=a[1]){
        if(a[2]-a[0]>=d){
            ans = ans + d;
        }
        if(a[2]-a[0]<d){
            ans = ans + 2*d +a[0] - a[2];
        }
    }
    cout << ans << endl;

    return 0;
}
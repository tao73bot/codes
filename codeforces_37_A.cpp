#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,cnt=1,a=1,b=1;
    cin >> n;
    int v[n];
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v,v+n);
    for(i=0;i<n-1;i++){
        if(v[i]!=v[i+1]){
            cnt++;
            a=1;
        }
        if(v[i]==v[i+1]){
            a++;
            if(a>b) b=a;
        }
    }

    cout << b << " " << cnt << "\n";

    return 0;
}
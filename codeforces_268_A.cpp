#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,cnt=0;
    cin >> n;
    int a[n],h[n];
    for(i=0;i<n;i++){
        cin >> a[i] >> h[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(h[j]==a[i]){
                cnt++;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}
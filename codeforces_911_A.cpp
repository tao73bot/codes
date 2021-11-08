#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,i,mn=1000000000,d,dis,cnt=0,s=100000;
    cin >> n;
    long long a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
        mn=min(mn,a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]==mn){
            /*for(int j=i+1;j<n;j++){
                if(a[j]==a[i]){
                    d=j-i;
                    s=min(s,d);
                }
            }*/
            if(cnt==0){
                d=i;
            }
            if(cnt>0){
                dis=i-d;
                d=i;
                s=min(s,dis);
            }
            cnt++;
        }
    }
    cout << s << endl;

    return 0;
}
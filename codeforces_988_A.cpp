#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k,i,cnt=0,l;
    cin >> n >> k;
    int a[n];
    set<int> s,x;
    for(i=0;i<n;i++){
        cin >> a[i];
        s.insert(a[i]);
    }
    l=s.size();
    if(l>=k){
        cout << "YES\n";
        for(i=0;i<n;i++){
            if(!x.count(a[i])){
                x.insert(a[i]);
                cout << i+1 << " ";
                cnt++;
                if(cnt==k){
                    break;
                }
            }
        }
        cout << "\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}
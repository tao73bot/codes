#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        long long n,i,mx=0,c=-1;
        cin >> n;
        long long a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
            mx=max(mx,a[i]);
        }
        for(i=0;i<n;i++){
            if(i>0&&a[i-1]!=mx&&a[i]==mx) c=i+1;
            if(i<n-1&&a[i+1]!=mx&&a[i]==mx) c=i+1;
        }
        cout << c << "\n";
        /*for(i=0;i<n;i++){
            if(a[i]==mx){
                v.push_back(i+1);
            }
        }
        for(i=1;i<v.size();i++){
            if(v[i]-v[i-1])>1){
                cout << v[i] <<"\n";
                break;
                c++;
            }
        }
        if(c==v.size()-1){
            cout << "-1\n";
        }*/
    }
    return 0;
}
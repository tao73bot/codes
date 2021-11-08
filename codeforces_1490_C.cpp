#include <bits/stdc++.h>
using namespace std;

vector<long long> v;
set<long long> s;

void solve()
{
    long long i,a;
    for(i=1;i<=10000;i++){
        a=i*i*i;
        v.push_back(a);
        s.insert(a);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    int t;
    cin >> t;
    while(t--)
    {
        long long n,i,flag=0;
        cin >> n;

        for(i=0;i<10000;i++){
            if(s.count(n-v[i])==1){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}
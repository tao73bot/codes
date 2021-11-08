#include <bits/stdc++.h>
using namespace std;

long long div(long long n)
{
    long long i,cnt=0;
    while(n%2==0){
        if(n%2==0){
            n/=2;
        }
    }
    if(n%2==1&&n!=1){
        cout << "YES\n";
    }
    if(n==1){
        cout << "NO\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        if(n%2==1){
            cout << "YES\n";
        }
        else{
            div(n);
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(a%b==0) return b;
    else{
        return gcd(b,a%b);
    }
}

int main()
{
    int t,mx,n;
    int a[102];
    string s;
    cin >> t;
    getline(cin,s);
    while(t--)
    {
        getline(cin,s);
        istringstream is(s);
        n=0;

        while(is >> a[n]){
            n++;
        }

        mx=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int gd=gcd(a[i],a[j]);
                mx=max(mx,gd);
            }
        }
        cout << mx << "\n";
    }
    return 0;
}
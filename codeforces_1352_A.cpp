#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n,i,k,p=1;
        cin >> n;
        vector<int>v;
        while (n!=0)
        {
            k=n%10;
            if(k!=0){
                v.push_back(k*p);
            }
            n/=10;
            p*=10;
        }
        cout << v.size() << "\n";
        for(i=0;i<v.size();i++){
            cout << v[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
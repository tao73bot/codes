#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N,i;
        cin >> N;
        long long ans=0;
        long long int mod = 1000000007;
        long long a[N];
        for(i=0;i<N;i++){
            cin >> a[i];
        }
        sort(a,a+N,greater<int>());
        for(i=0;i<N;i++){
            if(a[i]-i>=0){
                ans += (a[i]-i);
                ans %=mod;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}
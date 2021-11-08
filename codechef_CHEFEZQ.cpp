#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        long long n,k,q,i,cnt=0,d=0;
        cin >> n >> k;
        for(i=0;i<n;i++){
            cin >> q;
            if(d+q<k)
            {
                if(cnt==0){
                    cnt=i+1;
                    d=0;
                }
            }
            d+=q-k;
            }
        if(cnt==0){
            cnt = n+((d+k)/k);
        }
        
        cout << cnt << endl;
    }
    
    return 0;
}
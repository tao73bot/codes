#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int i,N,ans=0;
        cin >> N;
        long long a[N];
        for(i=0;i<N;i++){
            cin >> a[i];
        }
        sort(a,a+N);
        for(i=0;i<N;i++){
            if(a[i]<=ans){
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
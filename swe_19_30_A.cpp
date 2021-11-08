#include <bits/stdc++.h.>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N,i,j,ans=0;;
        cin >> N;
        long long a[N];
        for(i=0;i<N;i++){
            cin >> a[i];
        }
        for(i=0;i<N-1;i++){
            for(j=1;j<N;j++){
                if(a[i]+a[j]==a[i]*a[j]){
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
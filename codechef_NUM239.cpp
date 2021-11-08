#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int L,R,i,ans=0;
        cin >> L >> R;

        for(i=L;i<=R;i++){
            if(i%10==2||i%10==3||i%10==9){
                ans++;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,ans;

    while (cin >> n)
    {
        if(n%2==0){
            ans = pow(n,2)/2;
        }
        if(n%2==1){
            ans = pow(n,2)/2 + 1;
        }
        cout << ans << endl;

        char s[1000][1000];

        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if((i%2==0 && j%2==0)||(i%2==1 && j%2==1)){
                    cout << 'C';
                }
                else{
                    cout << '.';
                }
            }
            cout << endl;
        }
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,ans=0;
    cin >> n >> m;
    char s[n][m];
    for(i=0;i<n;i++){
        cin >> s[i];
    }

    for(i=0;i<n-1;i++){
        for(j=0;j<m-1;j++){
            string a="";
            a+=s[i][j];
            a+=s[i+1][j];
            a+=s[i][j+1];
            a+=s[i+1][j+1];

            sort(a.begin(),a.end());
            if(a=="acef"){
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
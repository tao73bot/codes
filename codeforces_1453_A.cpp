#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,i,j,cnt=0;
        cin >> n >> m;
        int a[n],b[m];
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        for(j=0;j<m;j++){
            cin >> b[j];
        }

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(a[i]==b[j]){
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
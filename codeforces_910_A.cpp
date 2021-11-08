#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,i,j,cnt=0;
    cin >> n >> d;
    string s;
    cin >> s;

    for(i=0;i<n-1;){
        int a=0;
        for(j=d+i;j>=i;j--){
            if(s[j]=='1'){
                i=j;
                break;
            }
            else{
                ++a;
            }
        }
        if(a==d){
            cout<<"-1\n";
            return 0;
        }
        ++cnt;
    }
    cout << cnt << "\n";

    return 0;
}
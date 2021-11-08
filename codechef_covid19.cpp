#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define endl '\n'

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        int a[N];
        int mx=1,mn=100,count=1;
        for(int i=0;i<N;i++){
            cin >> a[i];
        }
        for(int i=1;i<N;i++){
            if(a[i]-a[i-1]<=2){
                count++;
                mx = max(mx,count);
            }
            else{
                mn = min(mn,count);
                mx = max(mx,count);
                count = 1;
            }
        }
        mn = min(mn,count);
        cout << mn <<" "<< mx << endl;
    }
    
    return 0;
}
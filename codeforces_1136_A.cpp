#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,k,cnt=0;
    cin >> n;
    int a[2*n];
    for(i=0;i<2*n;i++){
        cin >> a[i];
    }
    cin >> k;
    for(i=1;i<2*n;i+=2){
        if(k<=a[i]){
            break;
        }
        cnt++;
    }
    cout << n-cnt << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,cnt=0;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
        if(a[i]==1) cnt++;
    }
    if(cnt>0){
        cout << "HARD\n";
    }
    else{
        cout << "EASY\n";
    }
    return 0;
}
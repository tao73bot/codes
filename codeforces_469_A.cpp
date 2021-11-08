#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,q,i,cnt=0;
    cin >> n;
    cin >> p;
    int a[p];
    for(i=0;i<p;i++){
        cin >> a[i];
    }
    cin >> q;
    int b[q];
    for(i=0;i<q;i++){
        cin >> b[i];
    }
    int ara[p+q];
    for(i=0;i<p+q;i++){
        if(i<p){
            ara[i]=a[i];
        }
        else{
            ara[i]=b[i-p];
        }
    }
    sort(ara,ara+(p+q));

    for(i=0;i<p+q;i++){
        if(ara[i]!=ara[i+1]){
            cnt++;
        }
    }

    if(n==cnt){
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
    
    return 0;
}
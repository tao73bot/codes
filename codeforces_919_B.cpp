#include <bits/stdc++.h>
using namespace std;

int ds(long long i){
    int s=0;
    while(i>0){
        s+=(i%10);
        i/=10;
    }
    return s;
}
vector<long long> v;
void solve(){
    long long i;
    for(i=19;i<1e8;i+=9){
        if(ds(i)==10){
            v.push_back(i);
        }
    }
}

int main()
{
    solve();
    long long k,sum,i;
    cin >> k;
    cout << v[k-1] << "\n";
}
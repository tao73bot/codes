#include <bits/stdc++.h>
using namespace std;

set<int> s;
vector<int> v;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,i,cnt=0;
    cin >> n >> m;
    while(n--){
        int a,b;
        cin >> a >> b;
        for(i=a;i<=b;i++){
            s.insert(i);
        }
    }
    for(i=1;i<=m;i++){
        if(s.count(i)!=1){
            cnt++;
            v.push_back(i);
        }
    }
    cout << cnt << "\n";
    i=0;
    while(cnt--){
        cout << v[i] << " ";
        i++;
    }
    return 0;
}
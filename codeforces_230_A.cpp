#include <bits/stdc++.h>
using namespace std;

/*vector <pair<int, int>>v;
long long s,n,a,b;*/

int main()
{
    long long s,n,cnt=0;
    cin >> s >> n;
    long long a[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i];
        /*cin >> a >> b;
        v.push_back(make_pair(a,b));*/
    }
    //sort(v.begin(),v.end());

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swap(b[j],b[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        if(s>a[i]){
            cnt++;
        }
        s+=b[i];
        /*if(s<=v[i].first){
            cout << "NO\n";
            return 0;
        }
        else{
            s+=v[i].second;
        }*/
    }
    if(cnt==n){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    //cot << "YES\n";
    
    return 0;
}
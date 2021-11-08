#include <bits/stdc++.h>
using namespace std;

/*int bubble_sort(int a[], int n)
{
    int i,j,temp,swaps=0;
    for(i=0;i<=n-1;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                swaps++;
            }
        }
    }
    return swaps;
}*/
                                       //TLE                     
/*int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n,i,ans,cnt;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        ans=(n*(n-1)/2)-1;
        cnt=bubble_sort(a,n);
        //cout << cnt << endl;
        if(ans>=cnt){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}*/

void solve ()
{
    int n; cin >> n;
    vector<int>v(n);

    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    for(int i=1;i<n;i++){
        if(v[i-1]>v[i]){
            continue;
        }
        else{
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        /*int n; cin >> n;
        vector<int>v(n);

        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        bool f=false;
        for(int i=1;i<n;i++){
            if(v[i-1]<=v[i]){       ACCEPTED
                f=true;
            }
        }
        if(f==true){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }*/
        solve();
    }
    return 0;
}
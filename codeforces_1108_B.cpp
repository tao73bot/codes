#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()

khela_shuru
{
    SIS;
	int n,i,x,y=0;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    x=a[n-1];
    cout << x << " ";
    for(i=0;i<n;i++){
        if(a[i]==a[i+1]){
            i++;
        }
    	if(x%a[i]==0){
    		a[i]=0;
        }
    }
    for(i=0;i<n;i++){
        y=max(a[i],y);
    }
    cout << y << "\n";
	gelo;
}
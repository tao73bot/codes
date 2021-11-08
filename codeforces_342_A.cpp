#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

khela_shuru
{
	SIS;
	int n,i,x=0,b1=0,b2=0,b3=0,b4=0,b6=0,d;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
		if(a[i]==5||a[i]==7) x++;
		if(a[i]==1) b1++;
		if(a[i]==2) b2++;
		if(a[i]==3) b3++;
		if(a[i]==4) b4++;
		if(a[i]==6) b6++;
	}
	d=n/3;
	if(x>0){
		cout << "-1\n";
	}
	else{
		sort(a,a+n);
		if((b1==b2+b3)&&(b2<=b4+b6)&&(b3<=b6))
		{
			while(b1>0){
				cout << "1 ";
				b1--;
				if(b2>0){
					cout << "2 ";
					b2--;
				}
				else{
					cout << "3 ";
				}
				if(b4>0){
					cout << "4 ";
					b4--;
				}
				else cout << "6 ";
				cout << "\n";
			}
		}
		else cout << "-1\n";
	}
	gelo;
}
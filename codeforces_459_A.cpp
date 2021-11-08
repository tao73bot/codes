#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	int x1,x2,y1,y2,a,b,c,d;
	cin >> x1 >> y1 >> x2 >> y2;

	if(x1==x2){
		a=x1+fabs(y1-y2);
		b=y1;
		c=a;
		d=y2;
		cout << a << " " << b << " " << c << " " << d << "\n";
	}
	else if(y1==y2){
		a=x1;
		b=y1+fabs(x1-x2);
		c=x2;
		d=b;
		cout << a << " " << b << " " << c << " " << d << "\n";
	}
	else if(fabs(x1-x2)==fabs(y1-y2)){
		a=x1,b=y2,c=x2,d=y1;
		cout << a << " " << b << " " << c << " " << d << "\n";
	}
	else{
		cout << "-1\n";
	}
}

khela_shuru
{
	solve();
	gelo;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j,p=1001,ans;
	cin >> n;
	int a[101][4];
	for (i = 0; i < n; ++i)
	{
		cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];	 
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][0]>a[j][0]&&a[i][1]>a[j][1]&&a[i][2]>a[j][2])
			{
				a[j][0]=0;
				a[j][1]=0;
				a[j][2]=0;
				a[j][3]=0;
			}

		}
	}
	for(i=0;i<n;i++){
		if(a[i][3]<p&&a[i][3]!=0){
			p=a[i][3];
			ans=i+1;
		}
	}
	cout << ans << "\n";
	return 0;
}
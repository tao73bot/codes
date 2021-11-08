#include <bits/stdc++.h>
using namespace std;

double a[100],b[100];

double dist(int i,int j)
{
    return sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
}

int main()
{
    int N;
    double r,ans;
    cin >> N >> r;
    for(int i=0;i<N;i++){
        cin >> a[i] >> b[i];
    }

    for(int i=1;i<N;i++){
        ans += dist(i-1,i);
    }

    ans += 2*acos(-1)*r+dist(N-1,0);

    printf("%0.2lf\n",ans);

    return 0;
}
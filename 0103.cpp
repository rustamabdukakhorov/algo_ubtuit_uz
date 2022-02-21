//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, a, b;
	cin>>n;
	float m[n], k = 0;
	for(int i=0;i<n;i++)
	{
		cin>>m[i];
	}
	cin>>a>>b;
	for(int i=a-1;i<b;i++)
	{
		k += m[i];
	}
	cout<<setprecision(1)<<fixed<<k/(b+1-a);
	return 0;
}


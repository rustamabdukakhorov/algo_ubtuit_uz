//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	double m[n], k = 1, x = 0;
	for(int i=0;i<n;i++)
	{
		cin>>m[i];
	}
	for(int i=0;i<n;i++)
	{
		if((i+1)%2==1)
			k *= m[i];
		else
			x += m[i];
	}
	cout<<setprecision(2)<<fixed<<k/x;
	return 0;
}


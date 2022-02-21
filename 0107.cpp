//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	double m[n], k;
	for(int i=0;i<n;i++)
	{
		cin>>m[i];
	}
	k = m[0];
	for(int i=0;i<n;i++)
	{
		if(m[i] > k)
			k = m[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<setprecision(2)<<fixed<<m[i]/k<<" ";
	}
	return 0;
}


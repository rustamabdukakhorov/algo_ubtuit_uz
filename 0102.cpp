//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, a, b;
	cin>>n;
	double m[n], k = 0;
	for(int i=0;i<n;i++)
	{
		cin>>m[i];
	}
	k = m[0];
	for(int i=0;i<n;i++)
	{
		if(m[i] < k)
			k = m[i];
	}
	cin>>a>>b;
	for(int i=0;i<n;i++)
	{
		if(i >= a-1 && i < b)
		{
			m[i] = round(m[i]*10.0/k)/10;	
		}
		cout<<setprecision(1)<<fixed<<m[i]<<" ";
	}
	return 0;
}


//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int m[n];
	double k = 1;
	for(int i=0;i<n;i++)
	{
		cin>>m[i];
	}
	for(int i=0;i<n;i++)
	{
		if(m[i] % 2 == 0 || m[i] % 5 == 0) k*=m[i];
	}
	cout<<setprecision(2)<<fixed<<sin(k);
	return 0;
}


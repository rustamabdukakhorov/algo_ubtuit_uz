//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	double m[n], k, sum = 1;
	for(int i=0;i<n;i++)
	{
		cin>>m[i];
	}
	cin>>k;
	for(int i=0;i<n;i++)
	{
		if(m[i] > k)
			sum *= m[i];
	}
	cout<<setprecision(2)<<fixed<<log(sum);
	return 0;
}


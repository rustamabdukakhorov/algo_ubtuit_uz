//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	double a[n], sum = 0, count = 0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(i%2 == 1)
		{
			sum += a[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(int(a[i]) % 2 == 1)
		{
			a[i] = a[i] / sum;	
		}
		cout<<setprecision(2)<<fixed<<a[i]<<" ";
	}
	return 0;
}

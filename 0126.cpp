//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, k = 0;
	cin>>n;
	double a[n], sum = 0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum += a[i];
	}
	sum = log(sum/n);
	for(int i=0; i<n; i++)
	{
		if(a[i] < 0)
			a[i] = sum;
		cout<<setprecision(2)<<fixed<<a[i]<<" ";
	}
	return 0;
}

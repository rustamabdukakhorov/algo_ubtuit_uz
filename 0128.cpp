//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin>>n;
	double a[n], sum = 0, count = 0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(int(a[i]) % 2 == 0)
		{
			sum += a[i];
			count++;
		}
	}
	sum = sum/count;
	cout<<setprecision(2)<<fixed<<sum;
	return 0;
}

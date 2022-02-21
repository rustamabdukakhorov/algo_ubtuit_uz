//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	double m[n], sum = 0, count = 0;
	for(int i=0;i<n;i++)
	{
		cin>>m[i];
	}
	for(int i=0;i<n;i++)
	{
		if(m[i] < 0)
		{
			sum += m[i];
			count++;
		}
	}
	cout<<setprecision(2)<<fixed<<sum/count;
	return 0;
}


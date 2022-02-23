//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin>>n;
	int a[n][n];
	double sum = 0, count = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]%m == 0)
			{
				sum += a[i][j];
				count++;
			}
		}
	}
	sum = sum/count;
	cout<<setprecision(2)<<fixed<<sum;
	return 0;
}


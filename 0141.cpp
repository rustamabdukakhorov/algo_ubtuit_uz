//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, x, y;
	cin>>n>>m;
	double sum = 0, count = 0;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>x>>y;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]>=x && a[i][j]<=y)
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


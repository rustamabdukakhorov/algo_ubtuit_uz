//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin>>n>>m;
	int a[n][m+1], sum = 0;
	for(int i=0;i<n;i++)
	{
		sum = 0;
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
			sum += a[i][j];
		}
		a[i][m] = sum;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}


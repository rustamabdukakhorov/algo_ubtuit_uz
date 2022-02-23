//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, x, y, sum = 0;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>x>>y;
	int b[x][y];
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			cin>>b[i][j];
		}
	}
	int c[n][y];
	for(int i=0;i<n;i++)
	{	
		for(int j=0;j<y;j++)
		{
			sum = 0;
			for(int k=0;k<m;k++)
			{
				sum += a[i][k]*b[k][j];
			}
			c[i][j] = sum;
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}


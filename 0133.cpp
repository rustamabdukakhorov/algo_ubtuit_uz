//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin>>n;
	int a[n][n], b[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)	
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)	
		{
			cin>>b[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		for(int j=0;j<n;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}


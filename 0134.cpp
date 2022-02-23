//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, x;
	cin>>n>>m;
	int a[n][m], b[m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++)
		cin>>b[i];
	for(int i=0;i<n;i++)
	{
		if(a[i][0] < b[0])
		{
			x = i;
			break;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(i == x)
		{
			for(int k=0;k<m;k++)
			{
				cout<<b[k]<<" ";
			}
			cout<<endl;
		}
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}


//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, k;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>k;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(j != k-1)
				cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}


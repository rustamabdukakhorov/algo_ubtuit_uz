//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, ki, kj;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
			if(a[i][j] < 0)
			{
				ki = i, kj = j;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(i == ki) i++;
		for(int j=0;j<m;j++)
		{
			if(j == kj) j++;
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}


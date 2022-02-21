//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin>>n>>m;
	int a[n][m], sum = 0, b[n], mx, mn;
	for(int i=0;i<n;i++)
	{
		sum = 0;
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
			sum += a[i][j];
		}
		b[i] = sum;
	}
	mx = a[0][0], mn = a[0][0];
	for(int i=0;i<n;i++)
		cout<<b[i]<<" ";
	cout<<"\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]>mx)
				mx = a[i][j];
			if(a[i][j]<mn)
				mn = a[i][j];
		}
	}
	cout<<mx<<" "<<mn;
	return 0;
}


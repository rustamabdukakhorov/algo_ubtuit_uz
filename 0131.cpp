//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin>>n>>m;
	int a[n][m], sum = 0, b[m], mx, mn;
	for(int i=0;i<m;i++) 
		b[i] = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
			b[j] += a[i][j];
		}
	}
	mx = a[0][0], mn = a[0][0];
	for(int i=0;i<m;i++)
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


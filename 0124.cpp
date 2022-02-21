//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k, m, x;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	m = a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i] > m)
			m = a[i];
	}
	cin>>k;
	x = a[k-1];
	a[k-1] = m;
	for(int i=0; i<n; i++)
	{
		if(a[i] == m && i != k-1)
		{
			a[i] = x;
		}
		cout<<a[i]<<" ";
	}
	return 0;
}


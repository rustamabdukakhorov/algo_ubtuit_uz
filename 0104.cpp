//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int m[n], k = 0, x;
	for(int i=0;i<n;i++)
	{
		cin>>m[i];
	}
	k = 0;
	for(int i=0;i<n;i++)
	{
		if(m[i] < m[k])
			k = i;
	}
	x = m[k];m[k] = m[n-1];m[n-1] = x;
	for(int i=0;i<n;i++)
	{
		cout<<m[i]<<" ";
	}
	return 0;
}


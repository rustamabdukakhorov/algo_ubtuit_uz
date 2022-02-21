//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, x, y, count = 0;
	cin>>n;
	int m[n];
	for(int i=0;i<n;i++)
	{
		cin>>m[i];
	}
	cin>>x>>y;
	for(int i=0;i<n;i++)
	{
		if(m[i] < x || m[i] > y)
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}


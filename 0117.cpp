//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, sum = 0;
	cin>>n;
	int m[n];
	for(int i=0;i<n;i++)
	{
		cin>>m[i];
	}
	for(int i=0;i<n;i+=2)
	{
		sum += m[i];
	}
	cout<<sum;
	return 0;
}


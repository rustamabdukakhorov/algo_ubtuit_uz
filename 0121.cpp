//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, sum = 0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>m;
	for(int i=m;i<n;i++)
		sum += a[i];
	cout<<sum;
	return 0;
}


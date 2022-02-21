//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, sum = 0, k;
	cin>>n;
	int m[n];
	for(int i=0;i<n;i++)
	{
		cin>>m[i];
	}
	cin>>k;
	for(int i=0;i<n;i++)
	{
		if(m[i] < k)
			sum += pow(m[i], 2);
	}
	cout<<sum;
	return 0;
}


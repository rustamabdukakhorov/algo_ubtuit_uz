//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int m[n], a, sum = 0;
	for(int i=0;i<n;i++)
	{
		cin>>m[i];
	}
	cin>>a;
	for(int i=0;i<n;i++)
	{
		if(m[i] > a)
			sum += m[i];
	}
	cout<<sum;
	return 0;
}


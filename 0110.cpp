//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int m[n], a, b, sum = 1;
	for(int i=0;i<n;i++)
	{
		cin>>m[i];
	}
	cin>>a>>b;
	for(int i=0;i<n;i++)
	{
		if(m[i]==a || m[i]==b)
			sum *= m[i];
	}
	cout<<sum;
	return 0;
}


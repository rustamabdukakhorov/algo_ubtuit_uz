//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin>>n;
	int a[n], sum = 0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2 == 0 || a[i]%3 == 0 || a[i]%5 == 0)
			sum += a[i];
	}
	cout<<sum;
	return 0;
}

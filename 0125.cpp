//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k, l, sum = 0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>k>>l;
	for(int i=k-1;i<l;i++)
		sum += pow(a[i], 3);
	cout<<sum;
	return 0;
}


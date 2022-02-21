//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, k = 0;
	cin>>n;
	int a[n];
	double sum = 0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		k += pow(a[i], 2);
		sum += a[i];
	}
	cout<<k<<endl;
	cout<<setprecision(2)<<fixed<<sum/n;
	return 0;
}

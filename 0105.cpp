//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, a, b;
	cin>>n;
	double m[n], s = 0, count = 0;
	for(int i=0;i<n;i++)
	{
		cin>>m[i];
	}
	cin>>a>>b;
	for(int i=0;i<n;i++)
	{
		if(i == a-1) i = b;
		s += m[i];
		count++;
	}
	cout<<setprecision(2)<<fixed<<s/count;
	return 0;
}


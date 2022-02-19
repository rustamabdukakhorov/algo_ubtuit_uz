//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double n, s = 0, p = 1, x;
	cin>>n>>x;
	for(double i=1.0;i<=n;i+=1.0)
	{
		s += pow(x,2*i-1) / (2*i-1);
	}
	cout<<setprecision(3)<<fixed<<s;
	return 0;
}

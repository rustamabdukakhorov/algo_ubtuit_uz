//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, x, i = 1;
	cin>>n>>x;
	double s = 0;
	for(i=1;i<=n;i++)
		s += pow(x,i)*pow(i, -0.5);
	cout<<setprecision(3)<<fixed<<s;
	return 0;
}


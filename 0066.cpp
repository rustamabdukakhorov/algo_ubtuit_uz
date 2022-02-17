//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, x, i = 1;
	cin>>n>>x;
	float s = 0;
	for(i=1;i<=n;i++)
		s += pow(-1, i-1)*pow(i,-1)*sin(i*x);
	cout<<setprecision(3)<<fixed<<s;
	return 0;
}


//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, i = 1;
	cin>>n;
	float s = 0;
	for(i=1;i<=n;i++)
		s += sin(i)/pow(2.0,i);
	cout<<setprecision(2)<<fixed<<s;
	return 0;
}


//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	float s = 0, p = 1, x;
	cin>>x;
	for(int i=1;i<=n;i++)
	{
		p = 1;
		for(int j=1;j<=2*i-2;j++)
			p *= j;
		s += pow(-1,i-1) * pow(x,2*i-2) / p;
	}
	cout<<setprecision(3)<<fixed<<s;
	return 0;
}

//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, x, i = 1;
	cin>>n>>x;
	float s = 0;
	for(i=1;i<=n;i++)
	{
		float p=1;
		for(int j=1;j<=2*i-1;j++)
			p *= j;
		s += pow(-1,i-1)*pow(x,2*i-1)/p;
	}
	cout<<setprecision(3)<<fixed<<s;
	return 0;
}


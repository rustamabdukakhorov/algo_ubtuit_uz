//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a,b,c,d;
	cin>>a>>b>>c>>d;
	if (a<=b && b<=c && c<=d)
	{
		a = max(max(a,b),max(c,d));
	}
	else
	{
		a = min(min(a,b),min(c,d));
	}
	b = a, c = a, d = a;
	cout<<a<<" "<<b<<" "<<c<<" "<<d;
	return 0;
}


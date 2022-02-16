//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a>=b && b>=c)
	{
		a = 2*a, b = 2*b, c = 2*c;
	}
	else
	{
		a = abs(a), b = abs(b), c = abs(c);
	}
	cout<<a<<" "<<b<<" "<<c;
	return 0;
}


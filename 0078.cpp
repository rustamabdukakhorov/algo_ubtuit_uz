//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a, b, c, y=0;
	cin>>a>>b>>c;
	for(double i=a;i<=b;i += 2.0)
	{
		y += (pow(a,b) + pow(b,i) + pow(c,a))/(2*i*i + 3*pow(a,i));
	}
	cout<<setprecision(2)<<fixed<<y;
	return 0;
}


//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a, b, c, y = 0;
	cin>>a>>b>>c;
	for(double i=c;i<=b;i += 0.25)
	{
		y += a*a*cos(i) + sin(i)/2.0 + b*i*i;
	}
	cout<<setprecision(2)<<fixed<<y;
	return 0;
}

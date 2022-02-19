//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a, y = 0;
	cin>>a;
	for(double i=-M_PI/2.0;i<=M_PI;i += M_PI/10.0)
	{
		y += 2*pow(a,sin(2*i)/3.0) + i*i*cos(a*i);
	}
	cout<<setprecision(2)<<fixed<<y;
	return 0;
}

//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a, b, c, y = 0;
	cin>>a>>b>>c;
	for(double i=-M_PI;i<=M_PI;i += M_PI/10.0)
	{
		y += (log(pow(a,2*sin(i))) + exp(2*i))/(atan(i) + b) + c;
	}
	cout<<setprecision(2)<<fixed<<y;
	return 0;
}

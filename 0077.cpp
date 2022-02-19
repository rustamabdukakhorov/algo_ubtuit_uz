//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a, b, c, d, y=0;
	cin>>a>>b>>c>>d;
	for(double i=c;i<=d;i += 2.0)
	{
		y += pow((sin(a*i) + pow(b,2*c))/(b*b + pow(cos(i),2)), 1.0/3) - sin(i*i)/(a*b);
	}
	cout<<setprecision(2)<<fixed<<y;
	return 0;
}


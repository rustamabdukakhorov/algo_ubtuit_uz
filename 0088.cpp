//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a, b, c, d, y = 0;
	cin>>a>>b>>c>>d;
	for(double i=d;i<=c;i += 1.5)
	{
		y += pow((a*i + b)/(b*b + pow(cos(i),2)),1.0/5) - sin(i*i)/(a*b);
	}
	cout<<setprecision(2)<<fixed<<y;
	return 0;
}

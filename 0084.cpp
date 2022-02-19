//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a, b, c, y = 0;
	cin>>a>>b>>c;
	for(double i=-1;i<=1;i += 0.25)
	{
		y += pow((sin(i*a) + pow(b,c))/(b*b + pow(cos(i),2)),1.0/3) - sin(i*i)/(a*b);
	}
	cout<<setprecision(2)<<fixed<<y;
	return 0;
}


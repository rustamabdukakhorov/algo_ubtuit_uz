//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a, b, c, y = 0;
	cin>>a>>b>>c;
	for(double i=5;i<=10;i += 0.5)
	{
		y += (a*a + b*i + pow(i,c))/(a*a + b*b + i*i);
	}
	cout<<setprecision(2)<<fixed<<y;
	return 0;
}


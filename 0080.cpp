//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a, y = 0;
	cin>>a;
	for(double i=0;i<=10;i += 0.5)
	{
		y += a*cos(i) - sin(i*i);
	}
	cout<<setprecision(2)<<fixed<<y;
	return 0;
}


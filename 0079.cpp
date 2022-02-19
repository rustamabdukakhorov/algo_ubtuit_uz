//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a, y = 0;
	cin>>a;
	for(double i=-M_PI/2.0;i<=M_PI;i += M_PI/19.0)
	{
		y += pow(pow(a,a),1.0/3) + i*i * cos(i*a);
	}
	cout<<setprecision(2)<<fixed<<y;
	return 0;
}


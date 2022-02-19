//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a, b, c, y = 0;
	cin>>a>>b>>c;
	for(double i=1;i<=10;i += 3.0)
	{
		y += a*i*i/b + i/c;
	}
	cout<<setprecision(2)<<fixed<<y;
	return 0;
}


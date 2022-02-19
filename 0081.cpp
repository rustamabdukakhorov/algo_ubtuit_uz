//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	float a, b, y = 0;
	cin>>a>>b;
	for(double i=1;i<=12;i += 2.0)
	{
		y += a*a + pow((b + sin(i))/(pow(a, 3) + pow(cos(i*i*i), 2)), 1.0/5);
	}
	cout<<setprecision(2)<<fixed<<y;
	return 0;
}


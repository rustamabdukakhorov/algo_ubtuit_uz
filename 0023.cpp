//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a, b, c, d, y, x;
	cin>>a>>b>>c>>d>>x;
	y = (a*x*x + b*x + c)/(x*pow(a,3) + a*a + pow(a,b-c)) + cos(fabs((a*x+b)/(c*x+d+pow(2,c))));
	printf("%.2f", y);
	return 0;
}


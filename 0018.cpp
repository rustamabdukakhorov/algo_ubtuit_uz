//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double x, y, f;
	cin>>x>>y;
	f = (1.0/(x + 2.0/pow(x,2) + 3.0/pow(x,3)) + exp(x*x + 3*x))/(atan(x + y) + pow(fabs(5 + x),2)) - pow(cos(y*y + x*x/2), 2);
	printf("%.2f", f);
	return 0;
}

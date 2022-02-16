//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double x, y, z;
	cin>>x>>y;
	z = log(fabs(pow(x+y, 2) + sqrt(fabs(y) + 2) - (x - x*y/(x*x/2 - 5)))) + pow(cos(x+y), 2)/pow(x+y,1.0/3);
	printf("%.2f", z);
	return 0;
}

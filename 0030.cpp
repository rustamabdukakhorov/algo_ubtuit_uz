//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double x, y, z, f;
	cin>>x>>y>>z;
	f = pow(0.5,x)*sqrt(x + pow(fabs(y) + 2, 0.25))*pow(exp(x-1)/sin(z+2) + 2, 1.0/3);
	printf("%.2f", f);
	return 0;
}


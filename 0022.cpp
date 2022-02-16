//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double x1, x2, c, d, f;
	cin>>x1>>x2>>c>>d;
	f = fabs(pow(sin(fabs(c*pow(x2,3) + d*pow(x1,3) - c*d)),2)/sqrt(c*x1*x1 + d*x2*x2 + 7)) + tan(x1*x2*x2 + d*d*d);
	printf("%.2f", f);
	return 0;
}


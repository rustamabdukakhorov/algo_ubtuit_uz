//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a, x, y, t;
	cin>>a>>x>>y;
	t = sqrt(y*y + exp(x) + sqrt(exp(x) + a/(x*x + 2)) + pow(cos(x), 2)/(sin(x*x))) + pow(cos(x), 3);
	printf("%.2f", t);
	return 0;
}


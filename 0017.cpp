//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double f, x, y;
	cin>>x>>y;
	f = 2*tan(x + M_PI/6.0)/(1.0/3 + pow(cos(y + x*x), 2)) + log(x*x + 2)/log(2);
	printf("%.2f", f);
	return 0;
}


//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a, b, t;
	cin>>a>>b;
	t = pow(a,0.2) + pow(b*(a+b)/(2*b + a*b), 0.25)*(a*a + b*b + 2);
	printf("%.2f", t);
	return 0;
}


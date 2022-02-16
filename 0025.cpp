//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a, x, t;
	cin>>a>>x;
	t = (sqrt(x-1) + sqrt(x+2) + log(sqrt(a*x*x)+2)/log(10))/(sqrt(sqrt(x+2) + sqrt(x+24) + pow(x,5)));
	printf("%.2f", t);
	return 0;
}


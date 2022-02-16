//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a, x, y;
	cin>>a>>x;
	y = x*sin(x/2.0 + x/3.0 + x/4.0) + (log(x*x - 2)/log(10) + pow(3,a))/(cos(x+3)*sin(x+3) + 8);
	printf("%.2f", y);
	return 0;
}


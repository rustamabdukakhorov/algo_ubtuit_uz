//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a,x,y,w;
	cin>>a>>x>>y;
	w = sqrt(exp(x*y) - x*sin(a*x) - (x*x + 2)/(fabs(x) + 5)) + sqrt(log(x*x+2) + 5);
	printf("%.2f", w);
	return 0;
}

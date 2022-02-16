//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double x, y, t;
	cin>>x>>y;
	t = (x*x+1)/(x*x + (x*y + y*y)/(y*y + (y + x*y)/(fabs(x*y) + 5))) + 1.0/(1 + cos(x) + 1.0/sin(fabs(x)));
	printf("%.2f", t);
	return 0;
}


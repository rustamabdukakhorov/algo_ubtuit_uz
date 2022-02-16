//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a,b,c,x,w;
	cin>>a>>b>>c>>x;
	w = 0.75 + (8.2 * x*x + sqrt(fabs(x*x*x + 3*x) + cos(x-2)))/(a/4.0 + b/3.0 + c/2.0 + 1);
	printf("%.2f", w);
	return 0;
}


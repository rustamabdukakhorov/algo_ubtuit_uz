//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double x,y;
	cin>>x;
	y = sqrt((2*tan(x+2) - cos(x+pow(2,x)))/(1 + pow(cos(x+2), 2))) + sin(x*x)/(x*x + 3);
	printf("%.2f", y);
	return 0;
}


//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double x, y;
	cin>>x;
	if(x<-1)
		y = 1.0/pow(x,2);
	else if(x<2)
		y = pow(x,2);
	else
		y = 4.00;
	printf("%.2f", y);
	return 0;
}


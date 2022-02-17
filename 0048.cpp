//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double x, y;
	cin>>x;
	if (x < 0)
		y = -x;
	else
		y = - x * x;
	printf("%.2f", y);
	return 0;
}


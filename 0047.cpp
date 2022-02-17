//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a, y;
	cin>>a;
	if(a<0)
	{
		y = -1*a;
	}
	else if(a<1)
	{
		y = a;
	}
	else if(a<2)
	{
		y = 1;
	}
	else
	{
		y = -2.0 * a + 5.0;
	}
	printf("%.2f", y);
	return 0;
}


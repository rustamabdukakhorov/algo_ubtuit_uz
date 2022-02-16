//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a,b,n1,n2;
	cin>>n1>>n2;
	if(n1>n2)
	{
		a = 4*n1*n2;
		b = (n1+n2)/2.0;
	}
	else
	{
		b = 4*n1*n2;
		a = (n1+n2)/2.0;
	}
	printf("%.1f %.1f",a,b);
	return 0;
}


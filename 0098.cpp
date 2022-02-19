//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

double x, y, c, d, s = 0, p = 1, ps = 1, sp = 0;

int main()
{
	cin>>x>>y>>c>>d;
	for(double a=1;a<=x;a++)
		s += (4*a + 6*log(a))/(a*a + a);
	for(double a=1;a<=y;a++)
		p *= fabs(a - 6*cos(a))/(a*a + pow(a, log(a)));
	for(double k=1;k<=c;k++)
	{
		for(double a=1;a<=d;a++)
		{
			ps *= (a*k + x)/(k*k + y*y);
		}
		sp += ps; ps = 1;
	}
	printf("%.2f %.2f %.2f", s, p, sp);
	return 0;
}


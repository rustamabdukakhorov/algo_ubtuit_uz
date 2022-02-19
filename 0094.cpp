//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

double x, y, c, d, s = 0, p = 1, ps = 0, sp = 0;

int main()
{
	cin>>x>>y>>c>>d;
	for(double a=1;a<=x;a++)
		s += pow(2*a + cos(a), 2.0);
	for(double a=1;a<=y;a++)
		p *= (a+6.0)/sqrt(a*a + 2);
	for(double k=1;k<=c;k++)
	{
		for(double y=1;y<=d;y++)
		{
			ps += (k*k + y)/sqrt(k*k + y*y);
		}
		sp += ps; ps = 0;
	}
	printf("%.2f %.2f %.2f", s, p, sp);
	return 0;
}


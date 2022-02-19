//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

double x, y, c, d, s = 0, p = 1, ps = 1, sp = 1;

int main()
{
	cin>>x>>y>>c>>d;
	for(double a=1;a<=x;a++)
		s += (a*x + 4)/sqrt(a + log(6));
	for(double a=1;a<=y;a++)
		p *= (a*x*x + 6)/sin(a*x);
	for(double i=1;i<=c;i++)
	{
		for(double j=1;j<=d;j++)
		{
			ps *= (i*j + y*x)/sqrt(pow(j*x + y, i));
		}
		sp *= ps; ps = 1;
	}
	printf("%.2f %.2f %.2f", s, p, sp);
	return 0;
}


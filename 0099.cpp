//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

double x, y, c, d, s = 0, p = 1, ps = 1, sp = 0;

int main()
{
	cin>>x>>y>>c>>d;
	for(double k=1;k<=x;k++)
		s += pow(k,3) + exp(k);
	for(double a=3;a<=y;a++)
		p *= a*x/sqrt(a*a + x*x);
	for(double i=1;i<=c;i++)
	{
		for(double j=1;j<=d;j++)
		{
			ps *= (i*x + j*j)/sqrt(i*i+j*y);
		}
		sp += ps; ps = 1;
	}
	printf("%.2f %.2f %.2f", s, p, sp);
	return 0;
}


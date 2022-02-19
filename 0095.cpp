//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

double x, y, c, d, s = 0, p = 0, ps = 1, sp = 0;

int main()
{
	cin>>x>>y>>c>>d;
	for(double i=1;i<=x;i++)
		s += (pow(i,4) + pow(i,2) + 3)/sqrt(i + exp(i));
	for(double k=1;k<=y;k++)
		p += (k + 1)/(pow(k,3.0) + 5.0*k);
	for(double m=1;m<=c;m++)
	{
		for(double n=1;n<=d;n++)
		{
			ps *= sqrt(fabs(pow(m,n) - pow(n,m))/(pow(m,n) + pow(n,m)));
		}
		sp += ps; ps = 1;
	}
	printf("%.2f %.2f %.2f", s, p, sp);
	return 0;
}


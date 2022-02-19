//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

double x, y, c, d, s = 0, p = 1, ps = 1, sp = 0;

int main()
{
	cin>>x>>y>>c>>d;
	for(double n=1;n<=x;n++)
		s += pow(5-17*n+pow(n,3), -1);
	for(double m=1;m<=y;m++)
		p *= sqrt(fabs(m-5)+1)/(m*m + 4*m - 1);
	for(double i=1;i<=c;i++)
	{
		for(double k=1;k<=d;k++)
		{
			ps *= pow(-1,i)*pow(fabs(sin(k)+exp(k)),1.0/7)/(2*fabs(4*pow(i,3) - pow(k,4)));
		}
		sp += ps; ps = 1;
	}
	printf("%.2f %.2f %.2f", s, p, sp);
	return 0;
}


//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

double x, y, a, b, s=0, p=1, p1=1, sp = 0;

int main()
{
	cin>>x>>y>>a>>b;
	for(double k=1;k<=x;k++)
		s += (pow(k,2) + sin(k) + 5)/pow(pow(k,7)+1, 0.2);
	for(double n=1;n<=y;n++)
		p *= (n + sqrt(n))/(n - pow(n+1,0.2));
	for(double k=1;k<=a;k++)
	{
		for(double i=1;i<=b;i++)
		{
			p1 *= (i*i + pow(k,2.0/i))/((sin(i) + cos(k))*pow(i,k));
		}
		sp += p1; p1 = 1;
	}
	printf("%.2f %.2f %.2f", s, p, sp);
	return 0;
}


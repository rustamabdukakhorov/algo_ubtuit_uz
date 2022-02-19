//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

double x, y, c, d, s = 0, p = 1, ps = 0, sp = 1;

int main()
{
	cin>>x>>y>>c>>d;
	for(double k=1;k<=x;k++)
		s += pow(-1,k)*(k+1)/(pow(k,3) + k*k + 1);
	for(double i=1;i<=y;i++)
		p *= (pow(i,3) + fabs(i-9.0))/(log(i) + 7*i);
	for(double n=1;n<=c;n++)
	{
		for(double m=1;m<=d;m++)
		{
			ps += pow(-1,m)*log(m+5)/(pow(m,n+3) + m*n);
		}
		sp *= ps; ps = 0;
	}
	printf("%.2f %.2f %.2f", s, p, sp);
	return 0;
}


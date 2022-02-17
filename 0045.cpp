//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a,b,c,x1,x2,d;
	cin>>a>>b>>c;
	d = b*b - 4*a*c;
	if(d<0)
	{
		cout<<"NO";
	}
	else
	{
		x1 = (-b + sqrt(d))/(2*a);
		x2 = (-b - sqrt(d))/(2*a);
		printf("%.2f %.2f",x1,x2);
	}
	return 0;
}


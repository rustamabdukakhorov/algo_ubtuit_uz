//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	float a, c, b, y=0;
	cin>>a>>b>>c;
	for(double i=a;i<=c;i += 3.0)
	{
		y += pow((a*i+b)/(b*b + pow(cos(i),2)), 1.0/3) - sin(i*i)/(a*b);
	}
	cout<<setprecision(2)<<fixed<<y;
	return 0;
}


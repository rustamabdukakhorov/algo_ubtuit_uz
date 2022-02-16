//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double x, y, z;
	cin>>x>>y>>z;
	if(z<=y && y<=x)
		cout<<x<<" "<<z;
	else if(y<=z && z<=x)
		cout<<x<<" "<<y;
	else if(z<=x && x<=y)
		cout<<y<<" "<<z;
	else if(x<=z && z<=y)
		cout<<y<<" "<<x;
	else if(x<=y && y<=z)
		cout<<z<<" "<<x;
	else
		cout<<z<<" "<<y;
	return 0;
}


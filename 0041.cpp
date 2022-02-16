//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double x,y,z;
	cin>>x>>y>>z;
	if(x<1 && y<1 && z<1)
	{
		if(x == min(x,min(y,z)))
			x = (y+z)/2.0;
		else if(y == min(x,min(y,z)))
			y = (x+z)/2.0;
		else
			z = (x+y)/2.0;
	}
	cout<<x<<" "<<y<<" "<<z;
	return 0;
}


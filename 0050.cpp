//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double x, y;
	cin>>x>>y;
	if ( fabs(x)<=1&&y<=(3-3*fabs(x))-1&&y>=-2)
		cout<<"yes";
	else
		cout<<"no";
	return 0;
}


//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	if(x+y>z && x+z>y && y+z>x)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}


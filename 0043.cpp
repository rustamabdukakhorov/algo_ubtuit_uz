//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double x, y;
	cin>>x>>y;
	if(x<0&&y<0)
		x = fabs(x), y = fabs(y);
	if((x<0&&y>0)||(x>0&&y<0))
		x += 0.5, y += 0.5;
	cout<<x<<" "<<y;		
	return 0;
}


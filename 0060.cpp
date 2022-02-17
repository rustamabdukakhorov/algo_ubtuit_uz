//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	float x, y;
    cin >> x >> y;
    if (x>=0&&sqrt(x*x+y*y)<=1||x>=2*fabs(y)-2&&x<=0)
    	cout << "yes";
    else 
		cout << "no";
	return 0;
}


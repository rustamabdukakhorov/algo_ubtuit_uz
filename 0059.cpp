//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	float x, y;
    cin >> x >> y;
    if (y<=1-2*fabs(x)&&y>=0||y>=2*fabs(x)-1&&y<=0)
    	cout << "yes";
    else 
		cout << "no";
	return 0;
}


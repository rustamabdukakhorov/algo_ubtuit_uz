//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	float x, y;
    cin >> x >> y;
    if (sqrt( x*x+y*y)<=1&&y<=x/2)
    	cout << "yes";
    else 
		cout << "no";
	return 0;
}


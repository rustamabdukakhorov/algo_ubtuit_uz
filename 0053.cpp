//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	float x, y;
    cin >> x >> y;
    if (fabs(x)<=2&&y>=1&&y<=1.5||fabs(x)<=1&&y>=fabs(x)&&y<=1)
    	cout << "yes";
    else 
		cout << "no";
	return 0;
}


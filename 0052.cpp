//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	float x, y;
    cin >> x >> y;
    if (y<=-x&&x<=0&&x>=-1&&y>=0||x>=-1.5&&x<=-1&&y<=2*x+3&&y>=0||x>=-2&&x<=1&&y>=(x-1)/3&&y<=0&&y<=2*x+3)
    	cout << "yes";
    else 
		cout << "no";
	return 0;
}


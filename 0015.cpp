//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double r1, r2, r3, r;
	cin>>r1>>r2>>r3;
	r = pow((pow(r1,-1) + pow(r2,-1) + pow(r3,-1)),-1);
	printf("%.2f", r);
	return 0;
}

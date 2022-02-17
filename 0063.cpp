//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int f(int n)
{
	if(n==0 || n==1)
		return 1;
	return n*f(n-1);
}

int main()
{
	int n, i = 1;
	cin>>n;
	float s = 0;
	for(i=1;i<=n;i++)
		s += pow(-1,i-1)*pow(f(2*i-1),-1);
	cout<<setprecision(4)<<fixed<<s;
	return 0;
}


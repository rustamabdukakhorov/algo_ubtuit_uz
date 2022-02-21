//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int m[n];
	double sum = 0, count = 0;
	for(int i=0;i<n;i++)
	{
		cin>>m[i];
	}
	for(int i=0;i<n;i++)
	{
		if(m[i] % 2 == 1)
		{
			sum += m[i];
			count++;
		}
	}
	cout<<setprecision(2)<<fixed<<round(sum*100/count)/100;
	return 0;
}


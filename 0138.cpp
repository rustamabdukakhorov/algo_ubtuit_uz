//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n][n], b[n], c[n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
			if(i == j)
			{
				b[i] = a[i][j];
			}
			if(n-1 - i == j)
			{
				c[i] = a[i][j];
			}
		}
	}
	sort(b, b + n);
	sort(c, c + n);
	cout<<b[n-1]<<" "<<c[0];
	return 0;
}


//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k;
	cin>>n;
	k = n*(n+1)/2;
	int a[n][n], b[k];
	k = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
			if( j >= i)
			{
				b[k] = (a[i][j]);
				k++;
			}
		}
	}
	for(int i=0;i<k;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
	sort(b, b + k);
	cout<<b[k - 1]<<" "<<b[0];
	return 0;
}


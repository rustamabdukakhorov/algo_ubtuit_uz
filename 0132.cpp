//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int l;
	cin>>l;
	int a[l], n, m;
	for(int i=0;i<l;i++)
		cin>>a[i];
	cin>>n>>m;
	int b[n][m], k=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(k<l)
			{
				b[i][j] = a[k];
				k++;
			}
			else
			{
				b[i][j] = 0;
			}
			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}


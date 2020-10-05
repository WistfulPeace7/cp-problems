#include <bits/stdc++.h>
using namespace std;
int main ()
{
	long long int t;
	cin >> t;
	long long int n[t];
	long long int sol[t];
	for (long long int w=0; w<t; w++)
	{
		cin >> n[w];
		long long int a[n[w]];
		long long int x=0, y=0;
		for (long long int i=0; i<n[w]; i++)
			cin  >> a[i];
		for (long long int i=0; i< n[w]; i++)
		{
			if (a[i]==2)
				x++;
			if (a[i]==0)
				y++;
		}
		long long int g=y-1;
		long long int v=(g+1);
		long long int soln0=(g*v)/2;
		long long int f=x-1;
		long long int q=(f+1);
		long long int soln=(f*q)/2;
		sol[w]=soln+soln0;
	}
	for (long long int i=0; i<t; i++)
		cout << sol[i] << "\n";
	return 0;
}
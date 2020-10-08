#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int ans=0,total=0;		
		int n,k,f;
		cin >> n >> k;
		for (int i=0; i<n; i++)
		{
			cin >> f;
			total=total+f;
			if (f<=k)
				ans+=f;
			else
				ans+=k;
		}
		cout << total-ans << endl;
	}
}
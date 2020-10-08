#include <bits/stdc++.h>
using namespace std;
long long int func(int a)
{
	long long int x=a,ans=0;
	if (x%2==0)
	{
		while (x%2==0)
		{
			x=x/2;
			ans++;
		}
	}
	else
		ans=0;
	return ans+1;
}
int main()
{
	long long int t; cin >> t;
	while (t--)
	{
		long long int a; cin >> a;
		long long int k=pow(2,func(a));
		long long int answer=a/k;
		cout << answer << endl;
	}
	return 0;
}
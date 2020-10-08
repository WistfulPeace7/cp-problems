#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n=0,ans=0;
		string s; cin >> s;
		n=s.length();
		vector<char> v;
		for (int i=0; i<n; i++)
		{
			if(!v.empty())
			{
				if (v.back()!=s[i])
				{
					ans++;
					v.clear();
				}
				else 
					v.push_back(s[i]);
			}
			else{
				v.push_back(s[i]);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
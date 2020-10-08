#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n,temp=0,i=0; cin >> n;
		int a[n],five=0,ten=0;
		for (int j=0; j<n; j++)
		{
			cin >> a[j];
		}
		if(a[0]==10 || a[0]==15)
			cout<<"NO"<<endl;
		else
		{
			five++;
			for (i=1; i<n; i++)
			{
				if (a[i]==5)
					five++;
				else if (a[i]==10)
				{
					if (five==0)
					{
						cout << "NO\n";
						temp=1;
						break;
					}
					else
					{ 
						ten++;
						five--;
					}
				}
				else if (a[i]==15)
				{
					if (ten==0 && five<2)
					{
						cout << "NO\n";
						temp=1;
						break;
					}
					else
					{
						if (ten!=0)
							ten--;
						else
							five-=2;
					}
				}
			}	
		}
		if(i==n)
			cout<<"YES"<<endl;	
	}
}
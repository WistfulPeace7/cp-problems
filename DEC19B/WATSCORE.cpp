#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	int a[t];
	int score[t];
	memset (score,0,sizeof(score));
	for (int w=0; w<t; w++)
	{
		cin >> a[w];
		int b[8];
		memset (b,0,sizeof(b));
		for (int i=0; i<a[w]; i++)
		{
			int x,y;
			cin >> x >> y;
			if (x<9)
			{
				if (b[x-1]<y)
				{
					b[x-1]=y;
				}
			}
		}
		for (int i=0; i<8; i++)
			score[w]=score[w]+b[i];
	}
	for (int i=0; i<t; i++)
		cout << score[i] << "\n";
	return 0;
}
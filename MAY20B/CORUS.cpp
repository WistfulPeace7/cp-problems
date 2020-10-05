#include <bits/stdc++.h>
using namespace std;
int soln (unordered_map < char, int >m, int x)
{
  int sol = 0;
  for (char i = 'a'; i <= 'z'; i++)
    {
      m[i] = m[i] - x;
      if (m[i] >= 1)
	sol = sol + m[i];
    }
  return sol;
}

int main ()
{
  int t, x;
  cin >> t;
  x = t;
  while (t--)
    {
      unordered_map < char, int >map1;
      for (char i = 'a'; i <= 'z'; i++)
	        map1[i] = 0;
      int n, q, ans;
      cin >> n >> q;
      string s, stro;
      cin >> s;
      int c[q], a[q];
      for (int i = 0; i < q; i++)
	{
	  cin >> a[i];
	  c[i] = a[i];
	}
      for (int i = 0; i < n; i++)
	{
	  char lk = s[i];
	  map1[lk]++;
	}
      for (int i = 0; i < q; i++)
	{
	  ans = 0;
	  int total = soln (map1, c[i]);
	  cout << total << "\n";
	}
    }
}

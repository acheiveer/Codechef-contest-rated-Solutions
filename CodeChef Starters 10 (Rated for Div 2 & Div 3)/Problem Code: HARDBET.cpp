#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;

  while (t--)
  {
    int a, b, c;
    cin >> a >> b >> c;

    if (a < b && a < c)
    {
      cout << "Draw" << endl;
    }
    else if (b < a && b < c)
    {
      cout << "Bob" << endl;
    }
    else if (c < a && c < b)
    {
      cout << "Alice" << endl;
    }

  }
}

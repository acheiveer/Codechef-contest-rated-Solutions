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
    int n, k, s;
    cin >> n >> k >> s; // 3 2 14

    int size = n + k - 1; // 4

    // 1 3 5 5

    int sum = 0;

    int j = 1;
    for (int i = 1; i <= n; i++)
    {
      sum = sum + j;
      j += 2;
    }

    int num = s - sum;
    cout << num / (k - 1) << endl;
  }
}

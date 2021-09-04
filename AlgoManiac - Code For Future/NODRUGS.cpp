/*      ###########################
        #  Author : acheiveer     #
        #  College : HIT,Haldia   #
        ###########################
*/
#include<bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

typedef long long int              ll;
typedef vector<int>                vi;
typedef vector<ll>                 vl;
typedef vector<vector<int>>        vvi;
typedef pair<int, int>             pi;
typedef vector<pair<int, int>>      vpi;
typedef vector<pair<ll, ll>>        vpl;

#define sz(x)                      ((int)(x).size()) //never forget to type into int
#define inp(a, n)                  for(int Ele=0; Ele<(n); Ele++)cin>>a[Ele]
#define inp1(a, n)                 for(int Ele=1; Ele<=(n); Ele++)cin>>a[Ele]
#define forn(i,e)                  for(ll i = 0; i < e; i++)
#define forsn(i,s,e)               for(ll i = s; i < e; i++)
#define rforn(i,s)                 for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e)              for(ll i = s; i >= e; i--)
#define set_bits(n)                __builtin_popcountll(n)
#define max(a, b)                  (a < b ? b : a)
#define min(a, b)                  ((a > b) ? b : a)

#define INF                        1e18
#define kick(x)                    cout << "Case #" << x << ": ";
#define lb                         lower_bound
#define ub                         upper_bound
#define min_element                *min_element
#define max_element                *max_element
#define pb                         push_back
#define ppb                        pop_back
#define mp                         make_pair
#define rr return

//#define mod                       (in1e9+7
#define ff                        first
#define ss                        second
#define ceil(x,a)                 ((x + a - 1)/(a))
#define all(v)                    v.begin(), v.end()

ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}


bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) {return (a.second < b.second);}
//Prime_Seive
//bool prime[1000000 + 9]; void seive() { ll N = 1e6 + 1; memset(prime, true, sizeof(prime)); prime[0] = false; prime[1] = false; for (ll i = 2; i * i <= N; i++) { if (prime[i]) { for (ll j = i * i; j <= N; j += i) { prime[j] = false;}}}}
// check whether the given number is pow of 2
bool isPowerOfTwo(ll x) {return (x && !(x & (x - 1)));}


bool is_prime(ll n) {if (n <= 1)return false; if (n <= 3)return true; if (n % 2 == 0 || n % 3 == 0)return false; for (int i = 5; i * i <= n; i = i + 6)if   (n % i == 0 || n % (i + 2) == 0)return false; return true;}
int   dx[4] = {1, -1, 0, 0};
int   dy[4] = {0, 0, -1, 1};

int gcd(int a, int b) {
   return (b == 0 ? a : gcd(b, a % b));
}

unsigned int factorial(unsigned int n)
{
   if (n == 0)
      return 1;
   return n * factorial(n - 1);
}


//विजयी भवः
void singhaa() {
   int  n, k, l, i, j;
   cin >> n >> k >> l;
   vector<ll>v(n);
   unordered_map<ll, ll>m;
   for (i = 0; i < n; i++) {
      cin >> v[i];
      m[v[i]]++;
   }
   ll x = v[n - 1];
   sort(v.begin(), v.end(), greater<>());
   if (v[0] == x && m[v[0]] == 1) {
      cout << "Yes";
   } else if (v[0] == x && m[v[0]] > 1) {
      if (k > 0) {
         if (l >= 1) {
            cout << "Yes";
         } else {
            cout << "No";
         }
      } else {
         cout << "No";
      }
   } else {
      ll y = v[0];
      ll a = y - x;
      if (k > 0) {
         ll c = a / k;
         c++;
         if (c < l) {
            cout << "Yes";
         } else {
            cout << "No";
         }
      } else {
         cout << "No";
      }

   }
   cout << "\n";


}


int main() {
#ifndef ONLINE_JUDGE
   freopen("input1.txt", "r", stdin);
   freopen("output1.txt", "w", stdout);
#endif
   fast_io

   ll t = 1;
   // helper();
   cin >> t;
   while (t--) {
      //cout<<"oooo";
      singhaa();
   }

   return 0;
}









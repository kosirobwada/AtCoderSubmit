#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
typedef pair<int, int> P;
const int MOD = 1e9 + 7;

ll f(ll n2, ll n3, ll n4) {
  ll sm = 0;
  ll x;
  x = min(n3 / 2, n4);
  sm += x;
  n3 -= x * 2;
  n4 -= x;
  x = min(n3 / 2, n2 / 2);
  sm += x;
  n3 -= x * 2;
  n2 -= x * 2;
  x = min(n2, n4 / 2);
  sm += x;
  n2 -= x;
  n4 -= x * 2;
  x = min(n2 / 3, n4);
  sm += x;
  n2 -= x * 3;
  n4 -= x;
  sm += n2 / 5;
  return sm;
}

int main() {
  ll t;
  cin >> t;
  rep(i, t) {
    ll n2, n3, n4;
    cin >> n2 >> n3 >> n4;
    cout << f(n2, n3, n4) << endl;
  }
  return 0;
}

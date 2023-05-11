#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll MOD = 1e9 + 7;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  int N;
  cin >> N;
  ll ans = 1;
  for (int i = 1; i <= N; i++) {
    ans = ans % MOD * i % MOD;
  }
  cout << ans << endl;
  return 0;
}

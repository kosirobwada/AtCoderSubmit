#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  ll N;
  cin >> N;
  ll ans = LINF;
  for (int i = 1; i < 1010101; i++) {
    if (N % i == 0)
      ans = min(ans, i + N / i - 2);
  }
  cout << ans << endl;
  return 0;
}

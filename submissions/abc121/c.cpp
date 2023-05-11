#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  ll N, M;
  cin >> N >> M;
  vector<pair<ll, ll>> p(N);
  for (int i = 0; i < N; i++) {
    cin >> p[i].first >> p[i].second;
  }
  sort(p.begin(), p.end());
  ll ans = 0;
  for (int i = 0; i < N; i++) {
    if (p[i].second < M) {
      M -= p[i].second;
      ans += p[i].first * p[i].second;
    } else {
      ans += p[i].first * M;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}

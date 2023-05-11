#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
const int INF = 1e9;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll N, M;
  cin >> N >> M;
  ll ans = 0;
  if (2 * N > M) {
    cout << M / 2 << endl;
    return 0;
  }
  ans = N;
  M -= 2 * N;
  ans += M / 4;
  cout << ans << endl;
  return 0;
}

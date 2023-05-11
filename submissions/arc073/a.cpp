#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  int N, T;
  cin >> N >> T;
  vector<int> t(N);
  ll ans = 0;
  ll next = 0, end = 0;
  for (int i = 0; i < N; i++) {
    cin >> t[i];
  }
  ans = end = T + t[0];
  for (int i = 0; i < N; i++) {
    next = t[i];
    if (next < end) {
      ans += T + next - end;
      end = next + T;
    } else {
      ans += T;
      end = next + T;
    }
  }
  cout << ans << endl;
  return 0;
}

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

signed main() {
  int k, n;
  cin >> n >> k;
  vector<int> a(n);
  for (auto &x : a)
    cin >> x;
  sort(a.begin(), a.end());
  int ans = 1e9;
  for (int i = 0; i < n - k + 1; ++i) {
    ans = min(ans, a[i + k - 1] - a[i]);
  }
  cout << ans << endl;
}

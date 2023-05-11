#include "bits/stdc++.h"
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<ll> A(N);
  ll s = 0;
  rep(i, N) {
    cin >> A[i];
    s += A[i];
  }
  ll ans = 1e18, t = 0;
  rep(i, N) {
    t += A[i];
    ll u = abs(s - t - t);
    if (u < ans)
      ans = u;
  }
  cout << ans << endl;
}

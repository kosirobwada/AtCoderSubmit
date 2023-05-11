#include <atcoder/all>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace atcoder;
using mint = modint998244353;
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define Inf 1000000001

int main() {

  int N;
  cin >> N;

  long long K;
  cin >> K;

  vector<pair<long long, long long>> X(N);
  rep(i, N) { cin >> X[i].first >> X[i].second; }

  sort(X.begin(), X.end());

  long long cur = 0LL;

  rep(i, X.size()) {
    if (X[i].first - cur > K) {
      break;
    } else {
      K -= X[i].first - cur;
      cur = X[i].first;
      K += X[i].second;
    }
  }

  cout << cur + K << endl;

  return 0;
}

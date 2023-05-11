#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
using ll = long long;
using P = pair<int, int>;
const int INF = 1e9;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = int(a); i < int(b); ++i)
template <class T> bool chmax(T &a, const T &b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T> bool chmin(T &a, const T &b) {
  if (b < a) {
    a = b;
    return 1;
  }
  return 0;
}

int main() {
  int N;
  cin >> N;
  vector<int> a(N), b(N);
  rep(i, 0, N) cin >> a[i];
  for (int i = 0; i < N; i++) {
    if (i % 2 == 0)
      b[0] += a[i];
    else
      b[0] -= a[i];
  }
  b[0] /= 2;
  for (int i = 1; i < N; i++) {
    b[i] = a[i - 1] - b[i - 1];
  }
  for (auto x : b)
    cout << 2 * x << ' ';
  cout << endl;
  return 0;
}

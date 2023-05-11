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
  vector<int> a(N);
  rep(i, 0, N) cin >> a[i];
  vector<int> b(N);
  rep(i, 0, N) b[i] = a[i];
  sort(all(b));
  int x = b[N / 2];
  int y = b[N / 2 - 1];
  for (int i = 0; i < N; i++) {
    if (a[i] >= x)
      cout << y << endl;
    else
      cout << x << endl;
  }
  return 0;
}

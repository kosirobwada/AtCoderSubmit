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
  vector<int> b(N, 0);
  int i = N - 1;
  int j = 0;
  while (1) {
    if (i < 0)
      break;
    b[j] = a[i];
    i -= 2;
    j += 1;
  }
  i += 2;
  i = abs(1 - i);
  while (1) {
    if (i > N - 2)
      break;
    b[j] = a[i];
    i += 2;
    j += 1;
  }
  for (auto x : b)
    cout << x << ' ';
  cout << endl;
  return 0;
}

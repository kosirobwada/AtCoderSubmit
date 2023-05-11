#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  int N, M;
  cin >> N >> M;
  vector<int> s(M), c(M);
  int ans[3];
  for (int i = 0; i < M; i++) {
    cin >> s[i] >> c[i];
  }
  int min_i, max_i;
  if (N == 1) {
    min_i = 0;
    max_i = 9;
  } else if (N == 2) {
    min_i = 10;
    max_i = 99;
  } else {
    min_i = 100;
    max_i = 999;
  }
  for (int i = min_i; i <= max_i; i++) {
    string t = to_string(i);
    bool ok = true;
    for (int j = 0; j < M; j++) {
      if (t[s[j] - 1] - '0' != c[j])
        ok = false;
    }
    if (ok) {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}

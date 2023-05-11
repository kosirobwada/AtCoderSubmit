#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
using ll = long long;
using P = pair<int, int>;
const int INF = 1e9;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = int(a); i < int(b); ++i)

int main() {
  int N;
  cin >> N;
  vector<double> a(N), b(N);
  rep(i, 0, N) cin >> a[i] >> b[i];
  double tim = 0;
  for (int i = 0; i < N; i++) {
    tim += a[i] / b[i];
  }
  tim /= 2;
  double ans = 0;
  for (int i = 0; i < N; i++) {
    ans += min(a[i], tim * b[i]);
    tim -= min(a[i] / b[i], tim);
  }
  printf("%.6f\n", ans);
  return 0;
}

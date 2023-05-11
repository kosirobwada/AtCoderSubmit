#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
double Edis(ll x1, ll y1, ll x2, ll y2) {
  ll x, y;
  x = (x1 - x2), y = (y1 - y2);
  double Edis = sqrt(x * x + y * y);
  return Edis;
}
int main() {
  int N;
  cin >> N;
  vector<double> x(N), y(N);
  double ans = 0;
  for (int i = 0; i < N; i++) {
    cin >> x[i] >> y[i];
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      ans = max(ans, Edis(x[i], y[i], x[j], y[j]));
    }
  }
  printf("%.12lf", ans);
  return 0;
}

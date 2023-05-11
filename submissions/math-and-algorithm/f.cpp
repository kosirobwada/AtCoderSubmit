#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LINF = 1e18;
double Edis(ll x1, ll y1, ll x2, ll y2) {
  ll x, y;
  x = (x1 - x2), y = (y1 - y2);
  double Edis = sqrt(x * x + y * y);
  return Edis;
}
int main() {
  int N;
  cin >> N;
  double m = INF;
  vector<int> x(N), y(N);
  for (int i = 0; i < N; i++) {
    cin >> x[i] >> y[i];
  }
  for (int i = 0; i < N - 1; i++) {
    for (int j = i + 1; j < N; j++) {
      m = min(m, Edis(x[i], y[i], x[j], y[j]));
    }
  }
  printf("%.12lf\n", m);
  return 0;
}

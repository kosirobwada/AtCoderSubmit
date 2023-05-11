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
  int pattern = 3;
  int x1, y1, r1, x2, y2, r2;
  cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
  double a = Edis(x1, y1, x2, y2);
  if (a > r1 + r2)
    pattern = 5;
  else if (a < abs(r1 - r2))
    pattern = 1;
  else if (a == r1 + r2)
    pattern = 4;
  else if (a == abs(r1 - r2))
    pattern = 2;
  cout << pattern << endl;
  return 0;
}

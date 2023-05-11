#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
const ld EPS = 1e-14;
int main() {
  ld a, b, c;
  cin >> a >> b >> c;
  if (sqrt(a) + sqrt(b) < sqrt(c) - EPS)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}

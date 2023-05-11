#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  ll N, A, B;
  cin >> N >> A >> B;
  if (B - A < 0) {
    cout << 0 << endl;
    return 0;
  } else if (N == 1) {
    if (A == B) {
      cout << 1 << endl;
      return 0;
    } else {
      cout << 0 << endl;
      return 0;
    }
  } else {
    cout << (N - 2) * (B - A) + 1 << endl;
  }
  return 0;
}

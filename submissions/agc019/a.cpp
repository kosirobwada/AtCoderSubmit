#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  ll A, B, C, D, N;
  cin >> A >> B >> C >> D >> N;
  B = min(B, 2 * A);
  C = min(C, 2 * B);
  D = min(D, 2 * C);
  cout << D * (N / 2) + C * (N % 2) << endl;
  return 0;
}

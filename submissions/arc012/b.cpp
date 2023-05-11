#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  double N, va, vb, L;
  cin >> N >> va >> vb >> L;
  for (int i = 0; i < N; i++) {
    L = L * vb / va;
  }
  printf("%.12lf", L);
  return 0;
}

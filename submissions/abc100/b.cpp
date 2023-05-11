#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  int D, N;
  cin >> D >> N;
  if (N == 100)
    N = 101;
  while (D--)
    N *= 100;
  cout << N << endl;
  return 0;
}

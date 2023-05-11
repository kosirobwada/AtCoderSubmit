#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  int A, B;
  cin >> A >> B;
  if (A <= 9 && B <= 9)
    cout << A * B << endl;
  else
    cout << -1 << endl;
  return 0;
}

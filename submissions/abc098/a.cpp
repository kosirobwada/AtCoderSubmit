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
  cout << max({A + B, A - B, A * B}) << endl;
  return 0;
}

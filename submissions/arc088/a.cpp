#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  ll A, B;
  cin >> A >> B;
  int ans = 1;
  ll x = A;
  while (x * 2 <= B) {
    x *= 2;
    ans++;
  }
  cout << ans << endl;
  return 0;
}

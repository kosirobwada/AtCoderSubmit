#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  ll N;
  cin >> N;
  int ans = 0;
  if (N < 10) {
    cout << N << endl;
    return 0;
  }
  while (N / 10 != 0) {
    while (N % 10 != 9) {
      N--;
    }
    ans += N % 10;
    N /= 10;
  }
  cout << ans + N << endl;
  return 0;
}

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
  if ((B - A) % 2 == 0)
    cout << (B - A) / 2 << endl;
  else
    cout << min(A - 1, N - B) + 1 + (B - A - 1) / 2 << endl;
  return 0;
}

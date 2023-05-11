#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  int N;
  cin >> N;
  vector<int> A(3 * N);
  for (int i = 0; i < 3 * N; i++) {
    cin >> A[i];
  }
  ll ans = 0;
  sort(A.begin(), A.end());
  for (int i = 3 * N - 2; i >= N; i -= 2) {
    ans += A[i];
  }
  cout << ans << endl;
  return 0;
}

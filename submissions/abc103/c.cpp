#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  int N, M;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  int ans = 0;
  for (int i = 0; i < N; i++) {
    ans += A[i] - 1;
  }
  cout << ans << endl;
  return 0;
}

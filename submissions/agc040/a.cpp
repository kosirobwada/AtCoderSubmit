#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  string S;
  cin >> S;
  int N = S.size();
  vector<int> A(N + 1, 0);
  for (int i = 0; i < N; i++) {
    if (S[i] == '<')
      A[i + 1] = A[i] + 1;
  }
  for (int i = N - 1; i >= 0; i--) {
    if (S[i] == '>')
      A[i] = max(A[i], A[i + 1] + 1);
  }
  ll ans = 0;
  for (int i = 0; i < N + 1; i++) {
    ans += A[i];
  }
  cout << ans << endl;
  return 0;
}

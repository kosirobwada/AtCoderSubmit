#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, D;
  cin >> N;
  vector<int> a(N + 1);
  for (int i = 1; i <= N; i++) {
    cin >> a[i];
  }
  vector<int> b(N + 2);
  b[1] = a[1];
  for (int i = 2; i <= N; i++) {
    b[i] = max(b[i - 1], a[i]);
  }
  vector<int> c(N + 2);
  c[N] = a[N];
  for (int i = N - 1; i >= 0; i--) {
    c[i] = max(c[i + 1], a[i]);
  }
  cin >> D;
  for (int i = 0; i < D; i++) {
    int L, R;
    cin >> L >> R;
    cout << max(b[L - 1], c[R + 1]) << endl;
  }
  return 0;
}

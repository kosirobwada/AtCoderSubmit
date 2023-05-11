#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
  int N;
  cin >> N;
  vector<int> c(N + 1), p(N + 1), s1(N + 1, 0), s2(N + 1, 0);
  for (int i = 1; i <= N; i++) {
    cin >> c[i] >> p[i];
    if (c[i] == 1) {
      s1[i] = s1[i - 1] + p[i];
      s2[i] = s2[i - 1];
    } else {
      s1[i] = s1[i - 1];
      s2[i] = s2[i - 1] + p[i];
    }
  }
  int Q;
  cin >> Q;
  for (int i = 0; i < Q; i++) {
    int L, R;
    cin >> L >> R;
    cout << s1[R] - s1[L - 1] << ' ' << s2[R] - s2[L - 1] << endl;
  }
  return 0;
}

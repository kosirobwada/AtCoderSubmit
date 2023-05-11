#include <bits/stdc++.h>
using namespace std;

int main() {
  int D, N;
  cin >> D >> N;
  vector<int> a(D + 1, 0);
  for (int i = 0; i < N; i++) {
    int L, R;
    cin >> L >> R;
    a[L]++;
    a[R + 1]--;
  }
  vector<int> b(D + 1, 0);
  for (int i = 1; i <= D; i++) {
    b[i] = b[i - 1] + a[i];
    cout << b[i] << endl;
  }
  return 0;
}

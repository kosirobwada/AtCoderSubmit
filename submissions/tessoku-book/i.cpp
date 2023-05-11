#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<int> a(N + 1);
  a[0] = 0;
  for (int i = 1; i <= N; i++) {
    cin >> a[i];
    a[i] += a[i - 1];
  }
  for (int i = 0; i < Q; i++) {
    int X, Y;
    cin >> X >> Y;
    cout << a[Y] - a[X - 1] << endl;
  }
  return 0;
}

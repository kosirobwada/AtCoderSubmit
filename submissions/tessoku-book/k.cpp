#include <bits/stdc++.h>

using namespace std;

int N, X, A[100009];

int serach(int x) {
  int pos = lower_bound(A + 1, A + N, x) - A;
  if (pos <= N && A[pos] == x)
    return pos;
  return -1;
}

int main() {
  cin >> N >> X;
  for (int i = 1; i <= N; ++i)
    cin >> A[i];
  int ans = serach(X);

  cout << ans << endl;
  return 0;
}

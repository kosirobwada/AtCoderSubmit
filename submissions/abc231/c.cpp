#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<int> A(N), X(Q);
  for (int i = 0; i < N; i++)
    cin >> A[i];
  for (int i = 0; i < Q; i++)
    cin >> X[i];
  sort(A.begin(), A.end());
  for (int i = 0; i < Q; i++) {
    int ans = 0;
    int l = 0, r = N, mid;
    while (l != r) {
      mid = (l + r) / 2;
      if (X[i] <= A[mid])
        r = mid;
      else
        l = mid + 1;
    }
    ans = N - l;
    cout << ans << endl;
  }
}

#include <bits/stdc++.h>
using namespace std;
// LIS
int main() {
  int N;
  cin >> N;
  int A[100009], dp[100009];
  int len = 0;
  int L[100009];
  for (int i = 1; i <= N; i++) {
    cin >> A[i];
  }
  for (int i = 1; i <= N; i++) {
    int pos = lower_bound(L + 1, L + len + 1, A[i]) - L;
    dp[i] = pos;
    L[dp[i]] = A[i];
    if (dp[i] > len)
      len++;
  }
  cout << len << endl;
  return 0;
}

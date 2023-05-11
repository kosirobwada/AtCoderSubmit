#include <bits/stdc++.h>
using namespace std;

long long GCD(long long A, long long B) {
  while (A >= 1 && B >= 1) {
    if (A < B)
      B = B % A;
    else
      A = A % B;
  }
  if (A >= 1)
    return A;
  return B;
}

int main() {
  int N;
  cin >> N;
  vector<long long> A(N);
  for (int i = 0; i < N; i++)
    cin >> A[i];
  long long ans = A[0] * A[1] / GCD(A[0], A[1]);
  for (int i = 2; i < N; i++) {
    ans *= A[i] / GCD(ans, A[i]);
  }
  cout << ans << endl;
}

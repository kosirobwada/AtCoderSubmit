#include <iostream>
#include <vector>
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
  int n;
  cin >> n;
  vector<long long> A(n);
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  long long ans = GCD(A[0], A[1]);
  for (int i = 2; i < n; i++) {
    ans = GCD(ans, A[i]);
  }
  cout << ans << endl;
  return 0;
}

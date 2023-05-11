#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N;
  int ans = 11;
  cin >> N;
  for (long long i = 1; i * i <= N; i++) {
    int A, B;
    if (N % i == 0) {
      A = to_string(i).size();
      B = to_string(N / i).size();
      int f = max(A, B);
      ans = min(ans, f);
    }
  }
  cout << ans << endl;
}

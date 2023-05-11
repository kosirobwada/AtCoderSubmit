#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<double> A(N), B(N), C(N), D(N), E(N);
  double sum = 0, ans = 0;
  for (int i = 0; i < N; i++) {
    cin >> A[i] >> B[i] >> C[i] >> D[i] >> E[i];
    sum = A[i] + B[i] + C[i] + D[i] + E[i] * 110 / 900;
    ans = max(sum, ans);
  }
  printf("%.10lf\n", ans);
}

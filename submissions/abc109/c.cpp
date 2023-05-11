#include <bits/stdc++.h>
using namespace std;

int GCD(int A, int B) {
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
  int N, X;
  cin >> N >> X;
  vector<int> a(N + 1);
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }
  a[N] = X;
  sort(a.begin(), a.end());
  int a0 = a[0];
  for (int i = 0; i <= N; i++) {
    a[i] = a[i] - a0;
  }
  int g = 0;
  for (int i = 0; i <= N; i++) {
    g = GCD(g, a[i]);
  }
  cout << g << endl;
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  long long x;
  cin >> x;
  vector<long long> A;
  A.push_back(0);
  for (int i = 1; i <= N; i++) {
    long long m;
    cin >> m;
    A.push_back(m);
  }
  sort(A.begin(), A.end());
  for (int i = 1; i <= N; i++)
    A[i] += A[i - 1];

  // case:‚¿‚å‚¤‚Ç=N(‘Sˆõ)
  if (A[N] == x) {
    printf("%d\n", N);
    return 0;
  } else {
    for (int i = 1; i <= N; i++) {
      if (A[i] > x) {
        printf("%d\n", i - 1);
        return 0;
      }
    }
  }
  // case:—]‚é
  printf("%d\n", N - 1);
  return 0;
}

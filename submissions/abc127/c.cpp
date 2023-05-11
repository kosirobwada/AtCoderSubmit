#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  int Lmax = 1, Rmin = N;
  for (int i = 0; i < M; i++) {
    int L, R;
    cin >> L >> R;
    Lmax = max(Lmax, L);
    Rmin = min(Rmin, R);
  }
  cout << max(Rmin - Lmax + 1, 0) << endl;
}

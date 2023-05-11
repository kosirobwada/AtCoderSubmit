#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, D;
  cin >> N >> D;
  int x[N][D];

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < D; j++) {
      cin >> x[i][j];
    }
  }
  int cnt = 0;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      int d = 0;
      for (int k = 0; k < D; k++) {
        d += (x[i][k] - x[j][k]) * (x[i][k] - x[j][k]);
      }
      for (int k = 0; k < 1000 && k * k <= d; k++) {
        if (k * k == d)
          cnt++;
      }
    }
  }
  cout << cnt << endl;
}

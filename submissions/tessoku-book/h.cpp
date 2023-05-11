#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int>> a(H + 1, vector<int>(W + 1));
  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      cin >> a[i][j];
    }
  }
  vector<vector<int>> b(H + 1, vector<int>(W + 1));
  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      b[i][j] = b[i][j - 1] + a[i][j];
    }
  }
  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      b[i][j] += b[i - 1][j];
    }
  }
  int Q;
  cin >> Q;
  for (int i = 0; i < Q; i++) {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    cout << b[C][D] + b[A - 1][B - 1] - b[A - 1][D] - b[C][B - 1] << endl;
  }
  return 0;
}

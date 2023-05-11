#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int>> A(H, vector<int>(W));
  vector<vector<int>> B(H, vector<int>(W));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> A[i][j];
    }
  }
  vector<int> C(H), D(W);
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      C[i] += A[i][j];
      D[j] += A[i][j];
    }
  }
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      B[i][j] = C[i] + D[j] - A[i][j];
      cout << B[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}

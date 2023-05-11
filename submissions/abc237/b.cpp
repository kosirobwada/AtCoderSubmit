#include <bits/stdc++.h>
using namespace std;

int main() {
  int M, N;
  cin >> M >> N;
  vector<vector<int>> mat(M, vector<int>(N));
  vector<vector<int>> t_mat(N, vector<int>(M));
  int i, j;
  for (i = 0; i < M; i++) {
    for (j = 0; j < N; j++) {
      cin >> mat[i][j];
    }
  }
  for (i = 0; i < M; i++) {
    for (j = 0; j < N; j++) {
      t_mat[j][i] = mat[i][j];
    }
  }
  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
      printf("%d ", t_mat[i][j]);
    }
    printf("\n");
  }

  return 0;
}

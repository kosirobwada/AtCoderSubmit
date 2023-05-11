#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }
  vector<vector<char>> C(N, vector<char>(N, '-'));
  for (int i = 0; i < M; i++) {
    A[i]--;
    B[i]--;
    C[A[i]][B[i]] = 'o';
    C[B[i]][A[i]] = 'x';
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << C[i][j];
      if (j == N - 1)
        cout << endl;
      else
        cout << " ";
    }
  }
}

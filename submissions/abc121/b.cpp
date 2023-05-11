#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, C;
  cin >> N >> M >> C;
  vector<int> b(M);
  vector<vector<int>> a(N, vector<int>(M));
  int sum, count = 0;
  for (int i = 0; i < M; i++)
    cin >> b.at(i);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> a.at(i).at(j);
    }
  }
  for (int i = 0; i < N; i++) {
    sum = C;
    for (int j = 0; j < M; j++) {
      sum += b.at(j) * a.at(i).at(j);
    }
    if (sum > 0)
      count++;
  }
  cout << count << endl;
}

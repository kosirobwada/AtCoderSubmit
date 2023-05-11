#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, i, price = 0;
  cin >> N;
  vector<string> a(N);
  for (i = 0; i < N; i++) {
    cin >> a.at(i);
  }
  cin >> M;
  vector<string> b(M);
  for (i = 0; i < M; i++) {
    cin >> b.at(i);
  }
  for (i = 0; i < N; i++) {
    int count_red = 0;
    int count_blue = 0;
    for (int k = 0; k < N; k++) {
      if (a.at(i) == a.at(k)) {
        count_red++;
      }
    }
    for (int j = 0; j < M; j++) {
      if (a.at(i) == b.at(j)) {
        count_blue++;
      }
    }
    if (price < count_red - count_blue)
      price = count_red - count_blue;
  }
  cout << price << endl;
}

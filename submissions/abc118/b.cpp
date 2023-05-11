#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> x(M);
  for (int i = 0; i < N; i++) {
    int K;
    cin >> K;
    for (int j = 0; j < K; j++) {
      int a;
      cin >> a;
      x.at(a - 1)++;
    }
  }
  int count = 0;
  for (int t : x)
    if (t == N)
      count++;
  cout << count << endl;
}

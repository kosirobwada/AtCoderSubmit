#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, X, A;
  cin >> N >> M >> X;
  int count_A = 0, count_B = 0;
  for (int i = 0; i < M; i++) {
    cin >> A;
    if (A < X)
      count_A++;
    else
      count_B++;
  }
  cout << min(count_A, count_B) << endl;
}

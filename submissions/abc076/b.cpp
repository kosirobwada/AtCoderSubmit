#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, A;
  cin >> N >> K;
  A = 1;
  for (int i = 0; i < N; i++) {
    if (A * 2 >= A + K)
      A += K;
    else
      A = A * 2;
  }
  cout << A << endl;
}

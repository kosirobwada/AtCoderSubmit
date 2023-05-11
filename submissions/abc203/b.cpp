#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  int sum = 0;
  sum = N * (N + 1) * K * 50 + K * (K + 1) * N / 2;
  cout << sum << endl;
}

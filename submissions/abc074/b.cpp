#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, sum = 0;
  cin >> N;
  cin >> K;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    if (a > K / 2)
      sum += K - a;
    else
      sum += a;
  }
  cout << sum * 2 << endl;
}

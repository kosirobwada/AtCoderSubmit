#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  int ans = 0;
  if (N == 1) {
    cout << 1 << endl;
    return 0;
  }
  for (int i = 0; i < N; i++) {
    if (i * (i + 1) / 2 >= N) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}

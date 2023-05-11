#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll N, Y, ca = 0, cb = 0, cc = 0;
  cin >> N >> Y;
  for (int i = 0; i <= N; i++) {
    for (int j = 0; j <= N; j++) {
      if (10000 * i + 5000 * j + 1000 * (N - i - j) == Y && (N - i - j) >= 0) {
        cout << i << " " << j << " " << N - i - j << endl;
        return 0;
      }
    }
  }
  cout << -1 << " " << -1 << " " << -1 << endl;
  return 0;
}

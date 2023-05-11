#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, X, Y;
  cin >> A >> B >> C >> X >> Y;
  int ans = 1e9;
  for (int i = 0; i <= 2 * max(X, Y); i += 2) {
    int Z;
    Z = max((X - i / 2), 0) * A + max((Y - i / 2), 0) * B + i * C;
    if (Z < ans)
      ans = Z;
  }
  cout << ans << endl;
}

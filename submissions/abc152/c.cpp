#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int s = INT_MAX;
  int ans = 0;
  for (int i = 1; i <= N; i++) {
    int x;
    cin >> x;
    if (s > x) {
      ans += 1;
    }
    s = min(s, x);
  }
  cout << ans << endl;
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
  int n, sum = 0;
  cin >> n;
  int s[n];
  rep(i, n) {
    cin >> s[i];
    sum += s[i];
  }
  if (sum % 10 != 0) {
    cout << sum << endl;
    return 0;
  }
  sort(s, s + n);
  rep(i, n) {
    if (s[i] % 10 != 0) {
      sum -= s[i];
      break;
    }
    if (i == n - 1)
      sum = 0;
  }
  cout << sum << endl;
}

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
  int T;
  cin >> T;
  for (int i = 0; i < T; i++) {
    ll a, s;
    cin >> a >> s;
    if (a <= s && (a & (s - a)) == a)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}

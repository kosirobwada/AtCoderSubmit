#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  string S;
  cin >> S;
  string a, b;
  int ans = 0;
  for (int i = 0; i < S.size(); i++) {
    b += S[i];
    if (a != b) {
      ans++;
      a = b;
      b = "";
    }
  }
  cout << ans << endl;
  return 0;
}

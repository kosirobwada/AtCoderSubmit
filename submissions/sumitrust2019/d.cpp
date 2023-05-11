#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;
  int ans = 0;
  rep(i, 1000) {
    string tmp = to_string(i);
    if (tmp.size() == 1)
      tmp = "00" + tmp;
    else if (tmp.size() == 2)
      tmp = '0' + tmp;
    int k = 0;
    rep(j, n) {
      char tmpc = tmp[k];
      if (tmpc == s[j])
        k++;
      if (k == 3) {
        ans++;
        break;
      }
    }
  }
  cout << ans << endl;
}

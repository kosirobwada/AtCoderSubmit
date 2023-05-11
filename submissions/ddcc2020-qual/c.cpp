#include <bits/stdc++.h>
using namespace std;
using Int = long long;
template <typename T1, typename T2> inline void chmin(T1 &a, T2 b) {
  if (a > b)
    a = b;
}
template <typename T1, typename T2> inline void chmax(T1 &a, T2 b) {
  if (a < b)
    a = b;
}

// INSERT ABOVE HERE
signed main() {
  Int h, w, k;
  cin >> h >> w >> k;
  vector<string> ss(h);
  for (Int i = 0; i < h; i++)
    cin >> ss[i];

  vector<vector<Int>> ans(h);
  Int c = 1;
  for (Int i = 0; i < h; i++) {
    if (ss[i] == string(w, '.'))
      continue;
    ans[i].assign(w, 0);
    for (Int j = 0; j < w; j++) {
      ans[i][j] = c;
      if (ss[i][j] == '#')
        c++;
    }
    for (Int j = w - 1; j >= 0; j--) {
      if (ss[i][j] == '#')
        break;
      ans[i][j]--;
    }
  }
  assert(c == k + 1);

  for (Int i = 1; i < h; i++)
    if (ans[i].empty())
      ans[i] = ans[i - 1];

  for (Int i = h - 2; i >= 0; i--)
    if (ans[i].empty())
      ans[i] = ans[i + 1];

  for (Int i = 0; i < h; i++) {
    for (Int j = 0; j < w; j++) {
      if (j)
        cout << " ";
      cout << ans[i][j];
    }
    cout << endl;
  }
  return 0;
}

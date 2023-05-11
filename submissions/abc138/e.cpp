#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
  string S, T;
  cin >> S >> T;
  int N = S.size();
  int M = T.size();
  map<char, set<int>> s, t;
  for (int i = 0; i < N; i++) {
    s[S[i]].insert(i + 1);
  }
  for (int i = 0; i < M; i++) {
    t[T[i]].insert(i + 1);
  }
  for (char c = 'a'; c <= 'z'; c++) {
    if (!s[c].size() && t[c].size()) {
      cout << -1 << endl;
      return 0;
    }
  }
  ll ans = 0;
  int now = 0;
  for (int i = 0; i < M; i++) {
    char c = T[i];
    auto itr = s[c].upper_bound(now);
    if (itr == s[c].end()) {
      int tmp = now;
      now = 0;
      itr = s[c].upper_bound(now);
      ans += *itr + N - tmp;
      now = *itr;
    } else {
      ans += *itr - now;
      now = *itr;
    }
    // cout << now << endl;
  }
  cout << ans << endl;
  return 0;
}

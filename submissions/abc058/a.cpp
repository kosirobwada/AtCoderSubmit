#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
using ll = long long;
using P = pair<int, int>;
const int INF = 1e9;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = int(a); i < int(b); ++i)
template <class T> bool chmax(T &a, const T &b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T> bool chmin(T &a, const T &b) {
  if (b < a) {
    a = b;
    return 1;
  }
  return 0;
}
int c[50][26];
int main() {
  int N;
  cin >> N;
  rep(i, 0, N) {
    string S;
    cin >> S;
    for (auto C : S)
      c[i][C - 'a']++;
  }
  string ans = "";
  for (int i = 0; i < 26; i++) {
    int m = INF;
    rep(j, 0, N) m = min(c[j][i], m);
    char x = 'a' + i;
    rep(j, 0, m) ans += x;
  }
  cout << ans << endl;
  return 0;
}

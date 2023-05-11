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

int main() {
  string S;
  cin >> S;
  int l = 0;
  int r = S.size() - 1;
  int ans = 0;
  while (l < r) {
    if (S[l] == S[r])
      l++, r--;
    else if (S[l] == 'x')
      ans++, l++;
    else if (S[r] == 'x')
      ans++, r--;
    else {
      cout << -1 << endl;
      return 0;
    }
  }
  cout << ans << endl;
  return 0;
}

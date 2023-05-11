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
  int K, N;
  cin >> K;
  N = S.size();
  vector<string> x;
  rep(i, 0, N) rep(j, 1, 6) x.pb(S.substr(i, j));
  sort(all(x));
  x.erase(unique(all(x)), x.end());
  cout << x[K - 1] << endl;
  return 0;
}

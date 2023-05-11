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
  int N;
  cin >> N;
  string S;
  cin >> S;
  int cnt = 0, pre = 0;
  for (int i = 0; i < N; i++) {
    if (S[i] == '(')
      cnt++;
    else {
      cnt--;
      if (cnt < 0)
        pre = max(pre, -cnt);
    }
  }
  rep(i, 0, pre) S = "(" + S;
  N += pre;
  cnt = 0;
  for (int i = 0; i < N; i++) {
    if (S[i] == '(')
      cnt++;
    else
      cnt--;
  }
  rep(i, 0, cnt) S = S + ")";
  cout << S << endl;
  return 0;
}

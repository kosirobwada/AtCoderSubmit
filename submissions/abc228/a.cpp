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
  int S, T, X;
  cin >> S >> T >> X;
  if (S < T) {
    if (S <= X && X <= T)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  } else {
    if (X < T || S <= X)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}

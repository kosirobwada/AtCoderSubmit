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
  int a, b, c;
  cin >> a >> b >> c;
  if (c == 0) {
    if (a > b)
      cout << "Takahashi" << endl;
    else
      cout << "Aoki" << endl;
  } else {
    if (a >= b)
      cout << "Takahashi" << endl;
    else
      cout << "Aoki" << endl;
  }
  return 0;
}

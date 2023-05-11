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
  int N, X;
  cin >> N >> X;
  X--;
  Graph G;
  rep(i, 0, N) {
    int a;
    cin >> a;
    a--;
    G[i].pb(a);
  }
  queue<int> q;
  q.push(X);
  vector<bool> flag(N, false);
  flag[X] = true;
  int cnt = 1;
  while (!q.empty()) {
    int z = q.front();
    q.pop();
    for (auto v : G[z]) {
      if (flag[v] == false) {
        flag[v] = true;
        q.push(v);
        cnt++;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}

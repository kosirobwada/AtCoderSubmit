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
  int N, Q;
  cin >> N >> Q;
  Graph G;
  for (int i = 0; i < N - 1; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    G[a].pb(b);
    G[b].pb(a);
  }
  vector<int> cnt(N, 0);
  for (int i = 0; i < Q; i++) {
    int p, x;
    cin >> p >> x;
    p--;
    cnt[p] += x;
  }
  vector<int> sum(N, 0);
  vector<bool> flag(N, false);
  queue<int> q;
  q.push(0);
  sum[0] = cnt[0];
  while (!q.empty()) {
    int x = q.front();
    flag[x] = true;
    q.pop();
    for (auto v : G[x]) {
      if (flag[v])
        continue;
      sum[v] = sum[x] + cnt[v];
      q.push(v);
    }
  }
  for (auto x : sum)
    cout << x << ' ';
  cout << endl;
  return 0;
}

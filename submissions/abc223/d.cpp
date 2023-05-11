#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
using ll = long long;
using P = pair<int, int>;
const int INF = 1e9;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = int(a); i < int(b); ++i)

int main() {
  int N, M;
  cin >> N >> M;
  Graph G;
  vector<int> cnt(N, 0);
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    G[a].pb(b);
    cnt[b]++;
  }
  priority_queue<int, vector<int>, greater<int>> pq;
  vector<int> ans;
  for (int i = 0; i < N; i++) {
    if (cnt[i] == 0)
      pq.push(i);
  }
  while (!pq.empty()) {
    int i = pq.top();
    pq.pop();
    ans.pb(i);
    for (auto v : G[i]) {
      cnt[v]--;
      if (cnt[v] == 0)
        pq.push(v);
    }
  }
  if (ans.size() != N)
    cout << -1 << endl;
  else {
    for (int i = 0; i < N; i++) {
      cout << ans[i] + 1 << ' ';
    }
    cout << endl;
  }
  return 0;
}

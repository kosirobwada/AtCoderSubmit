#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;
int main() {
  int N, M;
  cin >> N >> M;
  vector<P> x(M);
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    x[i].first = b;
    x[i].second = a;
  }
  sort(x.begin(), x.end());
  int l = 0, ans = 0;
  for (auto v : x) {
    if (v.second >= l) {
      l = v.first;
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}

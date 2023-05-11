#include <atcoder/dsu>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
int main() {
  int N, M;
  cin >> N >> M;
  bool flag = true;
  dsu uf(N);
  if (M >= N)
    flag = false;
  map<int, int> mp;
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    mp[a]++;
    mp[b]++;
    if (uf.same(a, b))
      flag = false;
    else
      uf.merge(a, b);
  }
  for (auto v : mp) {
    if (v.second > 2)
      flag = false;
  }
  if (flag)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}

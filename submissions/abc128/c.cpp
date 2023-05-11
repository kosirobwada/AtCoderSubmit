#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  map<int, vector<int>> S;
  for (int i = 0; i < M; i++) {
    int k;
    cin >> k;
    for (int j = 0; j < k; j++) {
      int s;
      cin >> s;
      s--;
      S[i].push_back(s);
    }
  }
  vector<int> p(M);
  for (int i = 0; i < M; i++) {
    cin >> p[i];
  }
  int ans = 0;
  for (int bit = 0; bit < (1 << N); bit++) {
    bool flag = true;
    for (int i = 0; i < M; i++) {
      int cnt = 0;
      for (auto v : S[i]) {
        if (bit & (1 << v))
          cnt++;
      }
      if (cnt % 2 != p[i])
        flag = false;
    }
    if (flag)
      ans++;
  }
  cout << ans << endl;
  return 0;
}

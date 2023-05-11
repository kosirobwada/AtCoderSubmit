#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
const int INF = 1e9;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N;
  cin >> N;
  vector<int> p(N);
  int ans = 0;
  for (int i = 1; i <= N; i++) {
    cin >> p[i];
  }
  for (int i = 1; i < N; i++) {
    if (p[i] == i) {
      swap(p[i], p[i + 1]);
      ans++;
    }
  }
  if (p[N] == N)
    ans++;
  cout << ans << endl;
  return 0;
}

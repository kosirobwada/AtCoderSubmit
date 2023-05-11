#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
const int INF = 1e9;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N;
  cin >> N;
  int ans = 0, c = 0;
  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a[i];
    if (i > 0) {
      if (a[i] <= a[i - 1])
        c++;
      else {
        ans = max(ans, c);
        c = 0;
      }
    }
  }
  ans = max(ans, c);
  cout << ans << endl;
  return 0;
}

/*Hey, What's up?*/

#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL)
vector<long long> v;
int main() {
  fastio;
  long long a = 0, b = 0, c, d, e, f = 0, l, g, m, n, k, i, j, t, p, q;
  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> a;
    v.push_back(a);
  }
  sort(v.begin(), v.end());
  a = -1;
  b = -1;
  for (i = n - 1; i > 0; i--) {
    if (v[i] == v[i - 1]) {
      a = v[i];
      v[i] = -1;
      v[i - 1] = -1;
      break;
    }
  }
  sort(v.begin(), v.end());
  for (i = n - 1; i > 0; i--) {
    if (v[i] == v[i - 1]) {
      b = v[i];
      v[i] = -1;
      v[i - 1] = -1;
      break;
    }
  }
  if (a <= 0 || b <= 0) {
    cout << 0 << '\n';
  } else
    cout << (a * b) << '\n';
  return 0;
}

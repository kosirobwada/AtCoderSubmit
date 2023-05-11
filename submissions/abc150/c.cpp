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
  int N;
  cin >> N;
  vector<int> p(N), q(N);
  rep(i, 0, N) cin >> p[i];
  rep(i, 0, N) cin >> q[i];
  int k = 0, l = 0;
  do {
    k++;
  } while (next_permutation(all(p)));
  do {
    l++;
  } while (next_permutation(all(q)));
  cout << abs(k - l) << endl;
  return 0;
}

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
  string S;
  cin >> S;
  vector<int> a(N, 0);
  vector<int> cnt(N, 0);
  cnt[0] = 0;
  for (int i = 0; i < N; i++) {
    cnt[i + 1] = cnt[i];
    if (i == N - 1)
      continue;
    if (S[i] == 'A' && S[i + 1] == 'C') {
      a[i] = 1;
      a[i + 1] = 2;
      cnt[i]++;
      cnt[i + 1]++;
    }
  }
  /*for(auto v: a)cout << v << ' ';
  cout << endl;
  for(auto v: cnt)cout << v << ' ';
  cout << endl;*/
  for (int i = 0; i < Q; i++) {
    int l, r;
    cin >> l >> r;
    l--;
    r--;
    if (a[l] == 0 && a[r] % 2 == 0)
      cout << cnt[r] - cnt[l] << endl;
    else if (a[l] == 0 && a[r] == 1)
      cout << cnt[r] - cnt[l] - 1 << endl;
    else if (a[l] == 1 && a[r] == 0)
      cout << cnt[r] - cnt[l] + 1 << endl;
    else if (a[l] == 2 && a[r] == 0)
      cout << cnt[r] - cnt[l] << endl;
    else if (a[l] == 1 && a[r] == 1)
      cout << cnt[r] - cnt[l] << endl;
    else if (a[l] == 1 && a[r] == 2)
      cout << cnt[r] - cnt[l] + 1 << endl;
    else if (a[l] == 2 && a[r] == 1)
      cout << cnt[r] - cnt[l] - 1 << endl;
    else if (a[l] == 2 && a[r] == 2)
      cout << cnt[r] - cnt[l] << endl;
  }
  return 0;
}

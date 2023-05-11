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
ll modPow(ll a, ll n, ll p) {
  if (n == 0)
    return 1;
  if (n == 1)
    return a % p;
  if (n % 2 == 1)
    return (a * modPow(a, n - 1, p)) % p;
  ll t = modPow(a, n / 2, p);
  return (t * t) % p;
}

int main() {
  int N, M;
  cin >> N >> M;
  priority_queue<int> pq;
  rep(i, 0, N) {
    int a;
    cin >> a;
    pq.push(a);
  }
  for (int i = 0; i < M; i++) {
    int x = pq.top();
    pq.pop();
    pq.push(x / 2);
  }
  ll ans = 0;
  while (!pq.empty()) {
    ans += pq.top();
    pq.pop();
  }
  cout << ans << endl;
  return 0;
}

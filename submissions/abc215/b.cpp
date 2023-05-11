#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
using ll = long long;
using P = pair<int, int>;
const int INF = 1e9;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = int(a); i < int(b); ++i)
ll modPow(ll a, ll n) {
  if (n == 0)
    return 1;
  if (n == 1)
    return a;
  if (n % 2 == 1)
    return (a * modPow(a, n - 1));
  ll t = modPow(a, n / 2);
  return (t * t);
}

int main() {
  ll N;
  cin >> N;
  int K = 1;
  while (modPow(2, K) <= N) {
    K++;
  }
  cout << K - 1 << endl;
  return 0;
}

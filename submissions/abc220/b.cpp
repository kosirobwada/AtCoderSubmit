#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
using ll = long long;
using P = pair<int, int>;
const int INF = 1e9;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = int(a); i < int(b); ++i)
ll f(string s, ll k) {
  ll ans = 0;
  for (char x : s) {
    ans *= k;
    ans += x - '0';
  }
  return ans;
}
int main() {
  ll K;
  cin >> K;
  string A, B;
  cin >> A >> B;
  cout << f(A, K) * f(B, K) << endl;
  return 0;
}

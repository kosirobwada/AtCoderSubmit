#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll N, K;
  cin >> N >> K;
  map<ll, ll> mp;
  ll a, b;
  for (ll i = 0; i < N; i++) {
    cin >> a >> b;
    mp[a] += b;
  }
  for (auto p : mp) {
    if (p.second >= K) {
      cout << p.first << endl;
      break;
    } else {
      K -= p.second;
    }
  }
}

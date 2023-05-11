#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
using ll = long long;
using P = pair<ll, ll>;
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
vector<pair<long long, long long>> soinnsuu(long long N) {
  // 答えを表す可変長配列
  vector<pair<long long, long long>> res;

  // √N まで試し割っていく
  for (long long p = 2; p * p <= N; ++p) {
    // N が p で割り切れないならばスキップ
    if (N % p != 0) {
      continue;
    }

    // N の素因数 p に対する指数を求める
    int e = 0;
    while (N % p == 0) {
      // 指数を 1 増やす
      ++e;

      // N を p で割る
      N /= p;
    }

    // 答えに追加
    res.emplace_back(p, e);
  }

  // 素数が最後に残ることがありうる
  if (N != 1) {
    res.emplace_back(N, 1);
  }
  return res;
}
// 素数を判定する関数
bool isPrime(long long N) {
  if (N < 2)
    return false;
  for (long long i = 2; i * i <= N; ++i) {
    if (N % i == 0)
      return false;
  }
  return true;
}

int main() {
  ll mod = 1e9 + 7;
  ll N;
  cin >> N;
  ll cnt = 0;
  map<ll, ll> mp;
  for (ll i = 2; i <= N; i++) {
    if (isPrime(i))
      mp[i] = 1;
    else {
      vector<pair<ll, ll>> p = soinnsuu(i);
      for (ll j = 0; j < p.size(); j++) {
        ll siz = p[j].second;
        mp[p[j].first] += p[j].second;
      }
    }
  }
  ll ans = 1;
  for (auto itr = mp.begin(); itr != mp.end(); itr++) {
    ans *= (itr->second + 1);
    ans %= mod;
    // cout << itr->first << ' ' << itr->second << endl;
  }
  cout << ans << endl;
  return 0;
}

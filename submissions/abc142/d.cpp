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
// A, B の最大公約数を返す関数
long long GCD(long long A, long long B) {
  if (B == 0)
    return A;
  else
    return GCD(B, A % B);
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

int main() {
  ll A, B;
  cin >> A >> B;
  ll x = GCD(A, B);
  vector<pair<ll, ll>> s = soinnsuu(x);
  cout << s.size() + 1 << endl;
  return 0;
}

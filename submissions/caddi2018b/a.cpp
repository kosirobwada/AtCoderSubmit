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
vector<pair<long long, long long>> soinnsuu(long long N) {
  // ������\���ϒ��z��
  vector<pair<long long, long long>> res;

  // ��N �܂Ŏ��������Ă���
  for (long long p = 2; p * p <= N; ++p) {
    // N �� p �Ŋ���؂�Ȃ��Ȃ�΃X�L�b�v
    if (N % p != 0) {
      continue;
    }

    // N �̑f���� p �ɑ΂���w�������߂�
    int e = 0;
    while (N % p == 0) {
      // �w���� 1 ���₷
      ++e;

      // N �� p �Ŋ���
      N /= p;
    }

    // �����ɒǉ�
    res.emplace_back(p, e);
  }

  // �f�����Ō�Ɏc�邱�Ƃ����肤��
  if (N != 1) {
    res.emplace_back(N, 1);
  }
  return res;
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

bool comp(const pair<ll, ll> &e, const pair<ll, ll> &f) {
  return e.second < f.second;
}
int main() {
  ll N, P;
  cin >> N >> P;
  if (N == 1) {
    cout << P << endl;
    return 0;
  }
  vector<pair<ll, ll>> p = soinnsuu(P);
  ll ans = 1;
  sort(all(p), comp);
  for (auto v : p) {
    ll i = v.first;
    ll j = v.second;
    j /= N;
    ans *= modPow(i, j, 1e7);
  }
  cout << ans << endl;
  return 0;
}

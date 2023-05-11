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
// A, B �̍ő���񐔂�Ԃ��֐�
long long GCD(long long A, long long B) {
  if (B == 0)
    return A;
  else
    return GCD(B, A % B);
}
// �f���𔻒肷��֐�
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

int main() {
  ll A, B;
  cin >> A >> B;
  ll x = GCD(A, B);
  vector<pair<ll, ll>> s = soinnsuu(x);
  cout << s.size() + 1 << endl;
  return 0;
}

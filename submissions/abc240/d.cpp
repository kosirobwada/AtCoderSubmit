#include <bits/stdc++.h>
using namespace std;

long long pow2(long long x, long long n) {
  long long ret = 1;
  while (n > 0) {
    if (n & 1)
      ret *= x; // n �̍ŉ���bit�� 1 �Ȃ�� x^(2^i) ��������
    x *= x;
    n >>= 1; // n ��1bit ���ɂ��炷
  }
  return ret;
}
long long pow2(long long x, long long n, long long MOD) {
  long long ret = 1;
  while (n > 0) {
    if (n & 1)
      ret = ret * x % MOD; // n �̍ŉ���bit�� 1 �Ȃ�� x^(2^i) ��������
    x = x * x % MOD;
    n >>= 1; // n ��1bit ���ɂ��炷
  }
  return ret;
}

int main() {
  // ����
  int N;
  cin >> N;
  stack<pair<int, int>> st;
  int a;
  for (int i = 0; i < N; i++) {
    cin >> a;
    if (st.size() == 0) {
      // ��̏ꍇ
      if (a == 1) {
        // a��1�̏ꍇ������
      } else {
        st.push(make_pair(a, 1));
      }
    } else {
      auto stack_top = st.top();
      if (stack_top.first == a) {
        // ��ǉ�
        if (stack_top.second + 1 == a) { // ����Ə�����
          for (int j = 0; j < a - 1; j++) {
            st.pop();
          }
        } else {
          // �����Ȃ�
          st.push(make_pair(a, stack_top.second + 1));
        }
      } else {
        st.push(make_pair(a, 1));
      }
    }

    cout << st.size() << endl;
  }
}

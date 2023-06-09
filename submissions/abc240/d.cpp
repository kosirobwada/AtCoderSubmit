#include <bits/stdc++.h>
using namespace std;

long long pow2(long long x, long long n) {
  long long ret = 1;
  while (n > 0) {
    if (n & 1)
      ret *= x; // n の最下位bitが 1 ならば x^(2^i) をかける
    x *= x;
    n >>= 1; // n を1bit 左にずらす
  }
  return ret;
}
long long pow2(long long x, long long n, long long MOD) {
  long long ret = 1;
  while (n > 0) {
    if (n & 1)
      ret = ret * x % MOD; // n の最下位bitが 1 ならば x^(2^i) をかける
    x = x * x % MOD;
    n >>= 1; // n を1bit 左にずらす
  }
  return ret;
}

int main() {
  // 入力
  int N;
  cin >> N;
  stack<pair<int, int>> st;
  int a;
  for (int i = 0; i < N; i++) {
    cin >> a;
    if (st.size() == 0) {
      // 空の場合
      if (a == 1) {
        // aが1の場合消える
      } else {
        st.push(make_pair(a, 1));
      }
    } else {
      auto stack_top = st.top();
      if (stack_top.first == a) {
        // 一個追加
        if (stack_top.second + 1 == a) { // すると消える
          for (int j = 0; j < a - 1; j++) {
            st.pop();
          }
        } else {
          // 消えない
          st.push(make_pair(a, stack_top.second + 1));
        }
      } else {
        st.push(make_pair(a, 1));
      }
    }

    cout << st.size() << endl;
  }
}

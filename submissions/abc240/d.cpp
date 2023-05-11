#include <bits/stdc++.h>
using namespace std;

long long pow2(long long x, long long n) {
  long long ret = 1;
  while (n > 0) {
    if (n & 1)
      ret *= x; // n ‚ÌÅ‰ºˆÊbit‚ª 1 ‚È‚ç‚Î x^(2^i) ‚ğ‚©‚¯‚é
    x *= x;
    n >>= 1; // n ‚ğ1bit ¶‚É‚¸‚ç‚·
  }
  return ret;
}
long long pow2(long long x, long long n, long long MOD) {
  long long ret = 1;
  while (n > 0) {
    if (n & 1)
      ret = ret * x % MOD; // n ‚ÌÅ‰ºˆÊbit‚ª 1 ‚È‚ç‚Î x^(2^i) ‚ğ‚©‚¯‚é
    x = x * x % MOD;
    n >>= 1; // n ‚ğ1bit ¶‚É‚¸‚ç‚·
  }
  return ret;
}

int main() {
  // “ü—Í
  int N;
  cin >> N;
  stack<pair<int, int>> st;
  int a;
  for (int i = 0; i < N; i++) {
    cin >> a;
    if (st.size() == 0) {
      // ‹ó‚Ìê‡
      if (a == 1) {
        // a‚ª1‚Ìê‡Á‚¦‚é
      } else {
        st.push(make_pair(a, 1));
      }
    } else {
      auto stack_top = st.top();
      if (stack_top.first == a) {
        // ˆêŒÂ’Ç‰Á
        if (stack_top.second + 1 == a) { // ‚·‚é‚ÆÁ‚¦‚é
          for (int j = 0; j < a - 1; j++) {
            st.pop();
          }
        } else {
          // Á‚¦‚È‚¢
          st.push(make_pair(a, stack_top.second + 1));
        }
      } else {
        st.push(make_pair(a, 1));
      }
    }

    cout << st.size() << endl;
  }
}

#include <bits/stdc++.h>
using namespace std;

struct modint {
private:
  long long x;

public:
  static long long mod;
  modint(long long x = 0) : x((x % mod + mod) % mod) {}
  modint operator-() const { return modint(-x); }
  modint &operator+=(const modint &a) {
    if ((x += a.x) >= mod)
      x -= mod;
    return *this;
  }
  modint &operator-=(const modint &a) {
    if ((x += mod - a.x) >= mod)
      x -= mod;
    return *this;
  }
  modint &operator*=(const modint &a) {
    (x *= a.x) %= mod;
    return *this;
  }
  modint operator+(const modint &a) const {
    modint res(*this);
    return res += a;
  }
  modint operator-(const modint &a) const {
    modint res(*this);
    return res -= a;
  }
  modint operator*(const modint &a) const {
    modint res(*this);
    return res *= a;
  }
  modint pow(long long t) const {
    if (!t)
      return 1;
    modint a = pow(t >> 1);
    a *= a;
    if (t & 1)
      a *= *this;
    return a;
  }
  friend ostream &operator<<(ostream &os, const modint &m) {
    os << m.x;
    return os;
  }
  // for prime mod
  modint inv() const { return pow(mod - 2); }
  modint &operator/=(const modint &a) { return (*this) *= a.inv(); }
  modint operator/(const modint &a) const {
    modint res(*this);
    return res /= a;
  }
};
long long modint::mod = 998244353;
using mint = modint;

int main() {
  long long n;
  cin >> n;
  long long l = 1;
  mint ans;
  while (l <= n) {
    long long r = 10 * l;
    long long len = min(n + 1, r) - l;
    ans += mint(len + 1) * len / 2;
    l *= 10;
  }
  cout << ans << endl;
  return 0;
}

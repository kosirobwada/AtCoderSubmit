#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define all(x) (x).begin(), (x).end()

const int inf = 10000000;

long long ans(long long a) { return (a * (a - 1)) / 2; }

int main() {
  long long n;
  cin >> n;
  vector<int> a(n);
  rep(i, 0, n) cin >> a.at(i);

  int x = 0, y = 0, z = 0;
  rep(i, 0, n) {
    if (a.at(i) == 1)
      x++;
    if (a.at(i) == 2)
      y++;
    if (a.at(i) == 3)
      z++;
  }
  cout << ans(x) + ans(y) + ans(z) << endl;
}

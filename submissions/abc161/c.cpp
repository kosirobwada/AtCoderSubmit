#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, k;
  cin >> n >> k;
  long long a = n / k;
  long long ans = min(n - a * k, abs(n - k * (a + 1)));
  cout << ans << endl;
}

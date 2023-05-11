#include <bits/stdc++.h>
using namespace std;

vector<long long> num(100000, 0);
int main() {
  long long n;
  cin >> n;
  for (long long i = 0; i < n; i++) {
    int a;
    cin >> a;
    num[a]++;
  }
  long long ans = 0;
  for (int i = 0; i < 50000; i++) {
    ans += (num[i] * num[100000 - i]);
  }
  ans += (num[50000] * (num[50000] - 1)) / 2;
  cout << ans << endl;
  return 0;
}

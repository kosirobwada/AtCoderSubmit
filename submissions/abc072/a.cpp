#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, ans = 0;
  cin >> n;
  vector<int> a(n);

  vector<int> cnt(1000000);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    cnt[a[i]]++;
    if (a[i] != 100000)
      cnt[a[i] + 1]++;
    if (a[i] != 0)
      cnt[a[i] - 1]++;
  }

  ans = *max_element(cnt.begin(), cnt.end());

  cout << ans << endl;

  return 0;
}

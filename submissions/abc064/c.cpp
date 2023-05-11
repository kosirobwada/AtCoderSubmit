#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  vector<int> revel(9);

  int ans_min = 0;
  int ans_max = 0;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (1 <= a[i] && a[i] <= 399)
      revel[0]++;
    if (400 <= a[i] && a[i] <= 799)
      revel[1]++;
    if (800 <= a[i] && a[i] <= 1199)
      revel[2]++;
    if (1200 <= a[i] && a[i] <= 1599)
      revel[3]++;
    if (1600 <= a[i] && a[i] <= 1999)
      revel[4]++;
    if (2000 <= a[i] && a[i] <= 2399)
      revel[5]++;
    if (2400 <= a[i] && a[i] <= 2799)
      revel[6]++;
    if (2800 <= a[i] && a[i] <= 3199)
      revel[7]++;
    if (a[i] > 3199)
      revel[8]++;
  }

  int cnt = 0;

  for (int i = 0; i < 8; i++) {
    if (revel[i] > 0)
      cnt++;
  }

  if (cnt == 0) {
    ans_min = 1;
  } else
    ans_min = cnt;

  ans_max = cnt + revel[8];
  // if (ans_max >= 8)ans_max = 8;

  cout << ans_min << " " << ans_max << endl;

  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  int A[100009], B[100009], dp[100009];
  int N;
  vector<int> ans;
  cin >> N;
  for (int i = 2; i <= N; i++) {
    cin >> A[i];
  }
  for (int i = 3; i <= N; i++) {
    cin >> B[i];
  }
  dp[1] = 0;
  dp[2] = A[2];
  for (int i = 3; i <= N; i++) {
    dp[i] = min(dp[i - 1] + A[i], dp[i - 2] + B[i]);
  }
  int p = N;
  while (true) {
    ans.push_back(p);
    if (p == 1)
      break;
    if (dp[p - 1] + A[p] == dp[p])
      p = p - 1;
    else
      p = p - 2;
  }
  reverse(ans.begin(), ans.end());
  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++) {
    if (i >= 1)
      cout << " ";
    cout << ans[i];
  }
  cout << endl;
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  int A[110], B[110];
  for (int i = 0; i < N; i++)
    cin >> A[i] >> B[i];
  bool dp[110][10010];
  for (int i = 1; i < 10010; i++)
    dp[0][i] = false;
  dp[0][0] = true;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= X; j++) {
      if (dp[i][j - A[i]])
        dp[i + 1][j] = true;
      else if (dp[i][j - B[i]])
        dp[i + 1][j] = true;
    }
  }
  if (dp[N][X])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}

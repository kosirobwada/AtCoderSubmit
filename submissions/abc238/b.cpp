#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N), cut;
  for (int i = 0; i < N; i++)
    cin >> A[i];
  cut.push_back(0);
  int sum = 0;
  for (int i = 0; i < N; i++) {
    sum += A[i];
    cut.push_back(sum % 360);
  }
  cut.push_back(360);
  sort(cut.begin(), cut.end());
  int ans = 0;
  for (int i = 0; i < N + 1; i++) {
    int now = cut[i + 1] - cut[i];
    ans = max(ans, now);
  }
  cout << ans << endl;
}

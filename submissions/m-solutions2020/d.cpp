#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }
  long long ans = 0;
  long long cur = 1000;
  for (int i = 0; i < N - 1; i++) {
    long long x = 0;
    if (a[i] < a[i + 1])
      x = cur / a[i];
    cur += (a[i + 1] - a[i]) * x;
  }
  cout << cur << endl;
  return 0;
}

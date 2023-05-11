#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<long long> x(N), y(N), sum(N), sub(N);
  for (int i = 0; i < N; i++) {
    cin >> x[i] >> y[i];
    sum[i] = x[i] + y[i];
    sub[i] = x[i] - y[i];
  }
  sort(sum.begin(), sum.end());
  sort(sub.begin(), sub.end());
  cout << max(sum.back() - sum[0], sub.back() - sub[0]) << endl;
}

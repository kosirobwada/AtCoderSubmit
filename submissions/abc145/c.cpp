#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
using ll = long long;
const int INF = INT_MAX;
const ll LINF = LLONG_MAX;
bool chmin(int &a, int b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}
bool chmax(int &a, int b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
int mod = 1000000007;
int mod2 = 998244353;

int main() {
  int N;
  cin >> N;
  vector<int> vec;
  vector<double> x(N + 1), y(N + 1);
  for (int i = 1; i <= N; i++)
    cin >> x[i] >> y[i];
  for (int i = 0; i < N; i++)
    vec.push_back(i + 1);
  double v = 1;
  for (double i = 1; i <= N; i++)
    v *= i;
  double ans = 0;
  do {
    for (int i = 0; i < N - 1; i++) {
      double temp = (x[vec[i + 1]] - x[vec[i]]) * (x[vec[i + 1]] - x[vec[i]]) +
                    (y[vec[i + 1]] - y[vec[i]]) * (y[vec[i + 1]] - y[vec[i]]);
      ans += sqrt(temp);
    }
  } while (next_permutation(vec.begin(), vec.end()));
  ans /= v;
  cout << fixed << setprecision(10);
  cout << ans << endl;
}

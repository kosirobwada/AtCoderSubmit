#include <bits/stdc++.h>
using namespace std;

int main() {
  long long A, B, M, cost = 10000000;
  cin >> A >> B >> M;
  vector<long long> a(A), b(B), x(M), y(M), c(M);
  for (int i = 0; i < A; i++) {
    cin >> a.at(i);
  }
  for (int i = 0; i < B; i++) {
    cin >> b.at(i);
  }
  for (int i = 0; i < M; i++) {
    cin >> x.at(i) >> y.at(i) >> c.at(i);
    cost = min(cost, a.at(x.at(i) - 1) + b.at(y.at(i) - 1) - c.at(i));
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  cost = min(cost, a.at(0) + b.at(0));
  cout << cost << endl;
}

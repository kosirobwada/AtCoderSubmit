#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
const int INF = 1e9;
using ll = long long;
int main() {
  ll a, b;
  cin >> a >> b;
  while (a > 0 && b > 0) {
    if ((a % 10) + (b % 10) >= 10) {
      cout << "Hard" << endl;
      return 0;
    }
    a /= 10;
    b /= 10;
  }
  cout << "Easy" << endl;
  return 0;
}

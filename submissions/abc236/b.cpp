#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
const int INF = 1e9;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N;
  cin >> N;
  vector<int> a(4 * N);
  vector<int> b(N + 1, 0);
  for (int i = 1; i < 4 * N; i++) {
    cin >> a[i];
    b[a[i]]++;
  }
  for (int i = 1; i <= N; i++) {
    if (b[i] == 3) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}

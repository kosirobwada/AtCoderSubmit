#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  int N;
  cin >> N;
  vector<tuple<string, int, int>> vec(N);
  for (int i = 0; i < N; i++) {
    cin >> get<0>(vec[i]);
    int x;
    cin >> x;
    get<1>(vec[i]) = 100 - x;
    get<2>(vec[i]) = i + 1;
  }
  sort(vec.begin(), vec.end());
  for (int i = 0; i < N; i++) {
    cout << get<2>(vec[i]) << endl;
  }
  return 0;
}

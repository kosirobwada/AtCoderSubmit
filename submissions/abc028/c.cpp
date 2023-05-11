#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  int A, B, C, D, E;
  cin >> A >> B >> C >> D >> E;
  vector<int> S(4);
  S = {B + D + E, A + D + E, B + C + E, B + C + D};
  sort(S.begin(), S.end());
  cout << S[2] << endl;
  return 0;
}

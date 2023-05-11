#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  string S;
  cin >> S;
  int N;
  cin >> N;
  for (int i = 1; i <= N; i++) {
    int a, b;
    cin >> a >> b;
    reverse(S.begin() + a - 1, S.begin() + b);
  }
  cout << S << endl;
  return 0;
}

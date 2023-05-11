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
  bool ans = false;
  for (int i = 0; i < 4; i++) {
    if (S[i] == 'A' && S[i + 1] == 'C') {
      ans = true;
      break;
    }
  }
  if (ans == true)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}

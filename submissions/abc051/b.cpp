#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  int K, S, cnt = 0;
  cin >> K >> S;
  for (int x = 0; x <= K; x++) {
    for (int y = 0; y <= K; y++) {
      int z = S - x - y;
      if (z >= 0 && z <= K)
        cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}

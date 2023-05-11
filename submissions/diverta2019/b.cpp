#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  int R, G, B, N;
  cin >> R >> G >> B >> N;
  int ans = 0;
  for (int i = 0; i * R <= N; i++) {
    for (int j = 0; j * G <= N; j++) {
      int b = N - j * G - i * R;
      if (b >= 0 && b % B == 0)
        ans++;
    }
  }
  cout << ans << endl;
  return 0;
}

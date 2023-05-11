#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<char>> A(55, vector<char>(55));
  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      cin >> A[i][j];
    }
  }
  bool flag = true;
  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      if (A[i][j] == '#' && A[i][j - 1] != '#' && A[i - 1][j] != '#' &&
          A[i][j + 1] != '#' && A[i + 1][j] != '#') {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}

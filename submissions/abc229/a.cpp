#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
const int INF = 1e9;

int main() {
  char g[2][2];
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cin >> g[i][j];
    }
  }
  if (g[0][0] == '.' && g[1][0] == '#' && g[0][1] == '#' && g[1][1] == '.') {
    cout << "No" << endl;
  } else if (g[0][0] == '#' && g[1][0] == '.' && g[0][1] == '.' &&
             g[1][1] == '#') {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
  return 0;
}

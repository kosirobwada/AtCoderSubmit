#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<int>> c(3, vector<int>(3));
  vector<int> a(3);
  vector<int> b(3);
  bool frag = true;

  for (int i = 0; i < 3; i++) {
    int amin = 101;
    for (int j = 0; j < 3; j++) {
      cin >> c[i][j];
    }
  }

  int x = 0;
  for (int i = 0; i < 3; i++)
    b[i] = c[0][i] - x;
  for (int i = 0; i < 3; i++)
    a[i] = c[i][0] - b[0];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (c[i][j] != a[i] + b[j]) {
        frag = false;
        break;
      }
    }
  }

  if (frag)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}

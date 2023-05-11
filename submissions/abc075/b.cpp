#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int b[201][201];
char a[201][201];
int main() {
  int m, n;
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> a[i][j];
      if (a[i][j] == '#') {
        b[i + 1][j]++;
        b[i][j + 1]++;
        b[i - 1][j]++;
        b[i][j - 1]++;
        b[i + 1][j + 1]++;
        b[i - 1][j - 1]++;
        b[i - 1][j + 1]++;
        b[i + 1][j - 1]++;
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (a[i][j] == '#')
        cout << "#";
      else
        cout << b[i][j];
    }
    cout << endl;
  }
  return 0;
}

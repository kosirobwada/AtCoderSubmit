#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int n = 0, w = 0, s = 0, e = 0;
  int N = S.size();
  for (int i = 0; i < N; i++) {
    if (S.at(i) == 'N')
      n++;
    if (S.at(i) == 'W')
      w++;
    if (S.at(i) == 'S')
      s++;
    if (S.at(i) == 'E')
      e++;
  }
  if ((w == 0 && e != 0) || (w != 0 && e == 0) || (s != 0 && n == 0) ||
      (s == 0 && n != 0))
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
}

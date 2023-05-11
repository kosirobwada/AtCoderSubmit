#include <bits/stdc++.h>
using namespace std;
int main() {
  string S;
  cin >> S;
  int N = S.size();
  int x = 0, y = 0;
  for (int i = 0; i < N; i++) {
    if (S[i] == 'a')
      x++;
    else
      break;
  }
  for (int i = N - 1; i >= 0; i--) {
    if (S[i] == 'a')
      y++;
    else
      break;
  }
  if (x > y) {
    cout << "No" << endl;
  } else if (x == y) {
    bool flag = true;
    for (int i = 0; i < N; i++) {
      if (S[i] != S[N - i - 1])
        flag = false;
    }
    if (flag)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  } else {
    bool flag = true;
    for (int i = 0; i < N - y; i++) {
      if (S[i + x] != S[N - i - y - 1])
        flag = false;
    }
    if (flag)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  for (int i = S.size() - T.size(); 0 <= i; i--) {
    bool ok = true;
    for (int j = 0; j < T.size(); j++) {
      if (S[i + j] != '?' && S[i + j] != T[j]) {
        ok = false;
        break;
      }
    }
    if (!ok)
      continue;
    for (int j = 0; j < S.size(); j++) {
      if (i <= j && j < i + T.size()) {
        cout << T[j - i];
      } else {
        cout << (S[j] == '?' ? 'a' : S[j]);
      }
    }
    cout << endl;
    return 0;
  }
  cout << "UNRESTORABLE" << endl;
}

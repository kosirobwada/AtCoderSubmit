#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  string S, T;
  cin >> S >> T;
  for (int i = 0; i < 26; i++) {
    string R = S;
    for (int j = 0; j < S.size(); j++) {
      R[j] = ((R[j] - 'a') + i) % 26 + 'a';
    }
    if (R == T) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}

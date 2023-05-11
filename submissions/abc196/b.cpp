#include <bits/stdc++.h>
using namespace std;
int main() {
  string S;
  cin >> S;
  for (int i = 0; i < S.size(); i++) {
    if (S[i] == '.') {
      return 0;
    } else
      cout << S[i];
  }
}

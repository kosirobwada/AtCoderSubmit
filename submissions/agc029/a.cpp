#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  long ans = 0, a = 0, b = 0;
  for (int i = 0; i < int(S.size()); i++) {
    if (S[i] == 'W') {
      ans += i;
      a++;
    }
  }
  for (int i = 0; i < a; i++)
    b += i;
  cout << ans - b << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int ans = 1000;
  for (int i = 0; i < S.size() - 2; i++) {
    string t = S.substr(i, 3);
    int x = stoi(t);
    x = abs(x - 753);
    ans = min(ans, x);
  }
  cout << ans << endl;
}

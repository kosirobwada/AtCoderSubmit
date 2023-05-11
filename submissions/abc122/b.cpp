#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int ans = 0;
  for (int i = 0; i < S.size(); i++) {
    int j = i;
    while (j < S.size()) {
      if (S.at(j) != 'A' && S.at(j) != 'C' && S.at(j) != 'G' && S.at(j) != 'T')
        break;
      else
        j++;
    }
    ans = max(ans, j - i);
  }
  cout << ans << endl;
}

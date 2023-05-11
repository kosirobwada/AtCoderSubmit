#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;

  int ans = T.size();

  for (int start = 0; start <= S.size() - T.size(); start++) {
    int diff = 0;
    for (int i = 0; i < T.size(); i++) {
      if (T[i] != S[start + i]) {
        diff++;
      }
    }
    ans = min(ans, diff);
  }

  cout << ans << endl;
}

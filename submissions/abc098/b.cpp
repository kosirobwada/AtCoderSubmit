#include <bits/stdc++.h>
using namespace std;

#define rep(i, k, n) for (int i = k; i < n; i++)
int main() {
  int N;
  string S;
  cin >> N >> S;
  int ans = 0;
  map<char, int> mp1;
  rep(i, 0, N) {
    int tmp = 0;
    rep(j, 0, i) { mp1[S[j]]++; }
    rep(j, i, N) {
      if (mp1.find(S[j]) != mp1.end() && mp1[S[j]] != 0) {
        tmp++;
        mp1[S[j]] = 0;
      }
    }

    mp1.clear();
    ans = max(ans, tmp);
  }
  cout << ans << endl;
}

/*

*/

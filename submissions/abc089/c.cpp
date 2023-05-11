#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  int n;
  cin >> n;
  map<char, ll> mp;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    mp[s[0]]++;
  }

  vector<char> v = {'M', 'A', 'R', 'C', 'H'};

  ll ans = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j < 5; j++) {
      for (int k = j + 1; k < 5; k++) {
        ans += mp[v[i]] * mp[v[j]] * mp[v[k]];
      }
    }
  }
  cout << ans << endl;

  return 0;
}

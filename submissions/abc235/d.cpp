#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, n;
  cin >> a >> n;
  map<int, int> mp;
  mp[n] = 0;
  queue<int> q;
  q.push(n);
  while (q.size()) {
    int x = q.front();
    q.pop();
    if (x % a == 0) {
      int y = x / a;
      if (mp[y] == 0) {
        q.push(y);
        mp[y] = mp[x] + 1;
      }
    }
    string s = to_string(x);
    if (s[1] == '0')
      continue;
    string t = s.substr(1) + s[0];
    int z = stoi(t);
    if (mp[z] == 0) {
      q.push(z);
      mp[z] = mp[x] + 1;
    }
  }
  if (mp[1] != 0)
    cout << mp[1] << endl;
  else
    cout << -1 << endl;
  return 0;
}

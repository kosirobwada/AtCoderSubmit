#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int len = s.size();

  for (int i = 1; i < len - 1; i++) {
    string t = s.substr(0, len - i);
    bool frag = true;

    if (t.size() % 2 == 0) {
      for (int j = 0; j < t.size() / 2; j++) {
        if (t[j] != t[t.size() / 2 + j]) {
          frag = false;
          break;
        }
      }
      if (frag == true) {
        cout << t.size() << endl;
        break;
      }
    }
  }

  return 0;
}

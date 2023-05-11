#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int n = S.size();
  vector<int> ary(26);
  for (int i = 0; i < n; i++) {
    ary.at(S.at(i) - 97)++;
  }
  for (int i = 0; i < 26; i++) {
    if (ary.at(i) % 2 != 0) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}

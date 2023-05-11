#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  vector<int> a(26);
  sort(S.begin(), S.end());
  for (int i = 0; i < S.size(); i++) {
    a.at(S.at(i) - 'a') = 1;
  }
  for (int i = 0; i < 26; i++) {
    if (a.at(i) == 0) {
      cout << char(i + 'a');
      return 0;
    }
  }
  cout << "None" << endl;
}

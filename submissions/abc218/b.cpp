#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(26);
  vector<string> b(26);
  for (int i = 0; i < 26; i++) {
    cin >> a.at(i);
  }
  for (int i = 0; i < 26; i++) {
    b.at(i) = a.at(i) + 96;
  }
  for (int i = 0; i < 26; i++) {
    cout << b.at(i);
  }
  cout << endl;
}

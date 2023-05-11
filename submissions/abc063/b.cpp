#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  for (int i = 0; i < S.size(); i++) {
    for (int j = 0; j < S.size(); j++) {
      if (S.at(i) == S.at(j) && i != j) {
        cout << "no" << endl;
        return 0;
      }
    }
  }
  cout << "yes" << endl;
}

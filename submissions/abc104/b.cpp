#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  bool flag = true;
  int count = 0, pos;
  if (S.at(0) != 'A')
    flag = false;
  for (int i = 2; i < S.size() - 1; i++) {
    if (S.at(i) == 'C') {
      count++;
      pos = i;
    }
  }
  if (count != 1)
    flag = false;
  for (int i = 0; i < S.size(); i++) {
    if (i != 0 && i != pos && 'A' <= S.at(i) && S.at(i) <= 'Z')
      flag = false;
  }
  cout << ((flag) ? "AC" : "WA") << endl;
}

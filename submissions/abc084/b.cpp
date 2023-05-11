#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  string S;
  cin >> S;
  for (int i = 0; i < A + B; i++) {
    if (i == A && S.at(i) != '-') {
      cout << "No" << endl;
      return 0;
    } else if (!(S.at(i) >= '0' && S.at(i) <= '9') && i != A) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}

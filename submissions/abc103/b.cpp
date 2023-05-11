#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  int a = S.size();
  int count = 0, ans = 0;
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < a; j++) {
      if (S[(i + j) % a] == T[j])
        count++;
      else
        break;
    }
    if (count == a) {
      ans = 1;
      break;
    } else
      count = 0;
  }
  cout << ((ans == 1) ? "Yes" : "No") << endl;
}

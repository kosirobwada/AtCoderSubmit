#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int odd_ans = 0, even_ans = 0;
  for (int i = 0; i < S.size(); i++) {
    if (i % 2 == 0) {
      if (S.at(i) == '0')
        odd_ans++;
      else
        even_ans++;
    } else {
      if (S.at(i) == '0')
        even_ans++;
      else
        odd_ans++;
    }
  }
  cout << min(odd_ans, even_ans) << endl;
}

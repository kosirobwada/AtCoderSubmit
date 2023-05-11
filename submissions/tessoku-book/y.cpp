#include <bits/stdc++.h>
using namespace std;

int main() {
  int Q;
  cin >> Q;
  stack<string> S;
  for (int i = 0; i < Q; i++) {
    int X;
    cin >> X;
    if (X == 1) {
      string s;
      cin >> s;
      S.push(s);
    }
    if (X == 2) {
      cout << S.top() << endl;
    }
    if (X == 3) {
      S.pop();
    }
  }
  return 0;
}

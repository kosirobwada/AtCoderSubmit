#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, a = 1;
  cin >> X;
  for (int i = 2; i * i <= X; i++) {
    int x = i * i;
    while (x <= X) {
      a = max(a, x);
      x = x * i;
    }
  }
  cout << a << endl;
}

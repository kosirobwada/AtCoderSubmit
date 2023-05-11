#include <bits/stdc++.h>
using namespace std;

bool prime(int x) {
  for (int i = 2; i * i <= x; i++) {
    if (x % i == 0)
      return true;
  }
  return false;
}

int main() {
  int Q;
  cin >> Q;
  for (int i = 0; i < Q; i++) {
    int X;
    cin >> X;
    if (prime(X) == false)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  long long A, B;
  cin >> A >> B;
  for (int i = 1; i <= 2000; i++) {
    if (i * 8 / 100 == A && i * 10 / 100 == B) {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}

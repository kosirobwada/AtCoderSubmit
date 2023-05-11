#include <bits/stdc++.h>
using namespace std;

bool prime(int X) {
  for (int i = 2; i * i < X; i++) {
    if (X % i == 0)
      return 0;
  }
  return 1;
}

int main() {
  int N;
  for (cin >> N; !prime(N); N++)
    ;
  cout << N << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  for (int i = 9; i >= 0; i--) {
    int x = (1 << i);
    cout << (N / x) % 2;
  }
  cout << endl;
  return 0;
}

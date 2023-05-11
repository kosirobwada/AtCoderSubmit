#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int H, c = 1;
  cin >> H;
  while (2 * c <= H) {
    c *= 2;
  }
  cout << 2 * c - 1 << endl;
}

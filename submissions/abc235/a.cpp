#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, x, y, z;
  cin >> N;
  x = N / 100;
  z = N % 10;
  y = (N - x * 100) / 10;
  cout << N + 100 * y + 10 * z + x + 100 * z + 10 * x + y << endl;
}

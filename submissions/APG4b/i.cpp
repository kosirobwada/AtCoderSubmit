#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  int a, b;
  a = max(max(A, B), C);
  b = min(min(A, B), C);
  cout << a - b << endl;
}

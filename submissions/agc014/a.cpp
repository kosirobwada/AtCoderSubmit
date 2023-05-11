#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, cnt = 0;
  cin >> A >> B >> C;
  if (A == B && B == C && A % 2 == 0)
    return cout << -1, 0;
  while (A % 2 == 0 && B % 2 == 0 && C % 2 == 0) {
    int x = A / 2, y = B / 2, z = C / 2;
    A = y + z;
    B = x + z;
    C = x + y;
    cnt++;
  }
  cout << cnt << endl;
}

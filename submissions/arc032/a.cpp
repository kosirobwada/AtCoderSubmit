#include <bits/stdc++.h>
using namespace std;

bool issame(int n) {
  if (n < 2)
    return false;
  else if (n == 2)
    return true;
  else if (n % 2 == 0)
    return false;
  for (int i = 3; i * i <= n; i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}
int main() {
  int n;
  cin >> n;
  int N;
  N = n * (n + 1) / 2;
  if (issame(N))
    cout << "WANWAN" << endl;
  else
    cout << "BOWWOW" << endl;
}

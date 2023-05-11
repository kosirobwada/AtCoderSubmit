#include <bits/stdc++.h>
using namespace std;

long long fact(int n) {
  if (n == 1)
    return 1;
  return fact(n - 1) * n;
}

int main() {
  int N;
  cin >> N;
  cout << fact(N) << endl;
}

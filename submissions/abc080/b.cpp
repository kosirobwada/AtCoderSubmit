#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, sum = 0, a;
  cin >> N;
  a = N;
  for (int i = 0; i >= 0; i++) {
    if (N == 0)
      break;
    sum += N % 10;
    N = N / 10;
  }
  if (a % sum == 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}

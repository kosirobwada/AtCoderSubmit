#include <bits/stdc++.h>
using namespace std;

int digit_sum(int n) {
  if (n < 10)
    return n;
  return digit_sum(n / 10) + n % 10;
}
int main() {
  int N, A, B, count = 0;
  cin >> N >> A >> B;
  for (int i = 1; i <= N; i++) {
    if (A <= digit_sum(i) && digit_sum(i) <= B)
      count = count + i;
  }
  cout << count << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, sum = 0;
  cin >> N;
  for (int i = 0; i < N; i++) {
    int A, B;
    cin >> A >> B;
    if (A >= B)
      sum += A - B + 1;
    else
      sum += B - A + 1;
  }
  cout << sum << endl;
}

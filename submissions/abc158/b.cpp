#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int N, A, B, R, M;
  cin >> N >> A >> B;
  M = N / (A + B) * A;
  R = N % (A + B);
  cout << M + min(R, A) << endl;
}

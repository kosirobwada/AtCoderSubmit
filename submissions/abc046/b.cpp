#include <math.h>

#include <iostream>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  int res = K;

  res *= pow(K - 1, N - 1);

  cout << res << endl;

  return 0;
}

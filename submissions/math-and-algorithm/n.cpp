#include <iostream>
using namespace std;

int main() {
  long long N;
  cin >> N;
  for (long long i = 2; i * i <= N; i++) {
    while (N % i == 0) {
      N /= i;
      cout << i << endl;
    }
  }
  if (N >= 2)
    cout << N << endl;
  return 0;
}

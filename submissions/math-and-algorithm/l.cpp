#include <bits/stdc++.h>
using namespace std;

bool isprime(long long N) {
  for (long long i = 2; i * i <= N; i++) {
    if (N % i == 0)
      return false;
  }
  return true;
}

int main() {
  long long n;
  cin >> n;
  if (isprime(n))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}

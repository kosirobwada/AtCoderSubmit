#include <bits/stdc++.h>
using namespace std;
bool isprime(long long N) {
  if (N < 2)
    return false;
  for (long long i = 2; i * i <= N; ++i) {
    if (N % i == 0)
      return false;
  }
  return true;
}
int main() {
  int N;
  cin >> N;
  vector<int> v;
  for (int i = 2; i <= 55555; i++) {
    if (isprime(i))
      v.push_back(i);
  }
  vector<int> x0, x1, x2, x3, x4;
  for (int i = 0; i < v.size(); i++) {
    if (v[i] % 5 == 0)
      x0.push_back(v[i]);
    if (v[i] % 5 == 1)
      x1.push_back(v[i]);
    if (v[i] % 5 == 2)
      x2.push_back(v[i]);
    if (v[i] % 5 == 3)
      x3.push_back(v[i]);
    if (v[i] % 5 == 4)
      x4.push_back(v[i]);
  }
  for (int i = 0; i < N; i++) {
    cout << x2[i] << ' ';
  }
  cout << endl;
  return 0;
}

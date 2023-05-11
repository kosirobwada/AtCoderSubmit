#include <bits/stdc++.h>
using namespace std;

long long combi(long long n, long long r) {
  if (n == r || r == 0)
    return 1;
  else {
    return combi(n - 1, r - 1) + combi(n - 1, r);
  }
}
int main() {
  int n, r;
  cin >> n >> r;
  cout << combi(n, r) << endl;
}

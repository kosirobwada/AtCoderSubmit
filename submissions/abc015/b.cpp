#include <bits/stdc++.h>
using namespace std;
int main() {
  long long j = 0;
  long long n, m = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    long long a;
    cin >> a;
    j += a;
    if (a != 0) {
      m++;
    }
  }
  cout << (j + m - 1) / m << endl;
}

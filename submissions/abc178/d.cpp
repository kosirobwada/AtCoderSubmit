#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
int main() {
  int S;
  cin >> S;
  int a[2010];
  a[0] = 1;
  a[1] = a[2] = 0;
  for (int i = 3; i <= S; i++) {
    a[i] = (a[i - 1] + a[i - 3]) % mod;
  }
  cout << a[S] << endl;
}

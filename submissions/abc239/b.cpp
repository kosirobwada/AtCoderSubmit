#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
  long long x;
  cin >> x;
  if (x >= 0)
    cout << x / 10 << endl;
  else {
    cout << (x - 9) / 10 << endl;
  }
}

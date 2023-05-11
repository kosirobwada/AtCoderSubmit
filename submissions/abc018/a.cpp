#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a > b && b > c) {
    cout << 1 << endl;
    cout << 2 << endl;
    cout << 3 << endl;
  }
  if (a > c && c > b) {
    cout << 1 << endl;
    cout << 3 << endl;
    cout << 2 << endl;
  }
  if (b > a & a > c) {
    cout << 2 << endl;
    cout << 1 << endl;
    cout << 3 << endl;
  }
  if (b > c && c > a) {
    cout << 3 << endl;
    cout << 1 << endl;
    cout << 2 << endl;
  }
  if (c > b && b > a) {
    cout << 3 << endl;
    cout << 2 << endl;
    cout << 1 << endl;
  }
  if (c > a & a > b) {
    cout << 2 << endl;
    cout << 3 << endl;
    cout << 1 << endl;
  }
  return 0;
}
